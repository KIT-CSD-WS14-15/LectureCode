//
//  SequentialContainers.cpp
//  STL
//
//  Created by Manuel Giffels on 24.11.14.
//  Copyright (c) 2014 Manuel Giffels. All rights reserved.
//

#include<iostream>
#include<algorithm>
#include<array>
#include<vector>
#include<deque>
#include<list>
#include<forward_list>

template <typename T>
void print_entry(T entry){
    std::cout << entry << std::endl;
}

int main(int argc, char* agrv[]) {
    
    //Ordinary C/C++ arrays
    std::cout << "Ordinary C/C++ arrays:" << std::endl;
    int carray[10] = {[0 ... 9] = 5};//initialize all elements to 5
    print_entry(carray[0]);
    carray[9] = 1;
    std::sort(carray, carray+10);
    print_entry(carray[0]);
    
    //std::array
    std::cout << "std::array:" << std::endl;
    const int a_size(10);
    std::array<int, a_size> std_array = { {9,8,7,6,5,4,3,2,1,0} };
    print_entry(std_array.at(0));
    std_array[9] = 1;
    std::sort(std_array.begin(), std_array.end());
    print_entry(std_array[0]);
    
    //std::vector
    std::cout << "std::vector:" << std::endl;
    std::vector<int> std_vector;
    std_vector.push_back(20);
    std_vector.push_back(10);
    print_entry(std_vector[1]);
    std::sort(std_vector.begin(), std_vector.end());
    print_entry(std_vector[1]);
    
    //std::deque
    std::cout << "std::deque:" << std::endl;
    std::deque<int> std_deque;
    std_deque.push_back(10);
    std_deque.push_front(20);
    print_entry(std_deque[1]);
    std::sort(std_deque.begin(), std_deque.end());
    print_entry(std_deque[1]);
    
    //std:list
    std::cout << "std::list" << std::endl;
    std::list<int> std_list;
    std_list.push_back(10);
    std_list.push_front(20);
    print_entry(*(--std_list.end()));
    std_list.sort();
    print_entry(*(--std_list.end()));
    
    //std:forward_list
    std::cout << "std::forward_list" << std::endl;
    std::forward_list<int> std_forward_list;
    std_forward_list.push_front(10);
    std_forward_list.push_front(20);
    print_entry(*(++std_forward_list.before_begin()));
    std_forward_list.sort();
    print_entry(*(++std_forward_list.before_begin()));
}