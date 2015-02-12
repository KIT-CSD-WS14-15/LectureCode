//
//  Exercise03.cpp
//  Multi-threading
//
//  Created by Manuel Giffels on 10.02.15.
//  Copyright (c) 2015 Manuel Giffels. All rights reserved.
//

#include <atomic>
#include <iostream>

template <typename T>
std::string check_lock_free(T& my_atomic) {
    return my_atomic.is_lock_free() ? "yes" : "no";
}

int main(int argc, char* agrv[]) {
    std::atomic<bool> my_bool{true};
    std::cout << "bool is lock free? " << check_lock_free(my_bool) << std::endl;
    
    std::atomic<int> my_int{true};
    std::cout << "int is lock free? " << check_lock_free(my_int) << std::endl;
    
    std::atomic<float> my_float{true};
    std::cout << "float is lock free? " << check_lock_free(my_float) << std::endl;
    
    std::atomic<double> my_double{true};
    std::cout << "double is lock free? " << check_lock_free(my_double) << std::endl;
    
    std::atomic<char> my_char;
    std::cout << "char is lock free? " << check_lock_free(my_char) << std::endl;
}