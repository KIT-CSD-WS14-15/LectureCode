//
//  ContainerAdaptors.cpp
//  STL
//
//  Created by Manuel Giffels on 25.11.14.
//  Copyright (c) 2014 Manuel Giffels. All rights reserved.
//

#include<iostream>
#include<stack>
#include<queue>

template <typename T>
void print_top(T my_container){
    while(not my_container.empty()){
        std::cout << my_container.top() << std::endl;
        my_container.pop();
    }
}

template <typename T>
void print_front(T my_container){
    while(not my_container.empty()){
        std::cout << my_container.front() << std::endl;
        my_container.pop();
    }
}


int main(int argc, char* argv[]) {
    //Stack
    std::cout << "Stack:" << std::endl;
    std::stack<int> std_stack;
    std_stack.push(2);
    std_stack.push(1);
    std_stack.push(3);
    print_top(std_stack);
    
    //Queue
    std::cout << "Queue:" << std::endl;
    std::queue<int> std_queue;
    std_queue.push(2);
    std_queue.push(1);
    std_queue.push(3);
    print_front(std_queue);
    
    //PriorityQueue
    std::cout << "PriorityQueue:" << std::endl;
    std::priority_queue<int> std_priority_queue;
    std_priority_queue.push(2);
    std_priority_queue.push(1);
    std_priority_queue.push(3);
    print_top(std_priority_queue);
    
    return 0;
}