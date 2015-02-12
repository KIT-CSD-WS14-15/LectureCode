//
//  Example11.cpp
//  Multi-threading
//
//  Created by Manuel Giffels on 12.02.15.
//  Copyright (c) 2015 Manuel Giffels. All rights reserved.
//

#include <chrono>
#include <iostream>
#include <future>

int sleep(int seconds) {
    std::this_thread::sleep_for(std::chrono::seconds(seconds));
    return seconds;
}

int main(int argc, char* argv[]) {
    std::packaged_task<int(int)> task(&sleep);
    std::future<int> sleep_time = task.get_future();
    
    std::thread sleep_thread(std::move(task), 5);
    std::cout << "Started sleep_thread!" << std::endl;
    sleep_thread.detach();

    std::cout << "Slept for " << sleep_time.get()
    << " second(s)!"<< std::endl;
    
    return 0;
}