//
//  Example10.cpp
//  Multi-threading
//
//  Created by Manuel Giffels on 11.02.15.
//  Copyright (c) 2015 Manuel Giffels. All rights reserved.
//

#include <iostream>
#include <future>
#include <sstream>
#include <string>

std::string print_hello(std::string name) {
    std::cout << "Called print_hello with name "
    << name << std::endl;
    std::stringstream return_value;
    return_value << "Hello from task: " << name;
    return return_value.str();
}

int main(int argc, char* argv[]) {
    std::future<std::string> helloTaskA;
    helloTaskA = std::async(print_hello,
                            std::string("Task A"));
    std::cout << "Async Task A started" << std::endl;
    
    std::future<std::string> helloTaskB;
    helloTaskB = std::async(std::launch::async, print_hello,
                            std::string("Task B"));
    std::cout << "Async Task B started" << std::endl;

    std::future<std::string> helloTaskC;
    helloTaskC = std::async(std::launch::deferred, print_hello,
                            std::string("Task C"));
    std::cout << "Async Task C started" << std::endl;
    
    std::future<std::string> helloTaskD;
    helloTaskD = std::async(std::launch::deferred, print_hello,
                            std::string("Task D"));
    std::cout << "Async Task D started" << std::endl;

    
    std::cout << helloTaskA.get() << std::endl;
    std::cout << helloTaskB.get() << std::endl;
    std::cout << helloTaskC.get() << std::endl;

    return 0;
}