//
//  UnorderedAssociativeContainers.cpp
//  STL
//
//  Created by Manuel Giffels on 25.11.14.
//  Copyright (c) 2014 Manuel Giffels. All rights reserved.
//

#include<iostream>
#include<string>
#include<unordered_set>
#include<unordered_map>

template <typename T>
void print_container(T my_container){
    for (auto iter: my_container) {
        std::cout << iter << std::endl;
    }
}

template <typename T>
void print_map(T my_map){
    for (auto iter: my_map) {
        std::cout << iter.first << " " << iter.second << std::endl;
    }
}

int main(int argc, char* argv[]) {
    //Unordered_Set
    std::cout << "Unordered_Set:" << std::endl;
    std::unordered_set<int> std_unordered_set;
    std_unordered_set.insert(20);
    std_unordered_set.insert(20);
    std_unordered_set.insert(10);
    print_container(std_unordered_set);
    
    //Unordered_MultiSet
    std::cout << "Unordered_MultiSet:" << std::endl;
    std::unordered_multiset<int> std_unordered_multiset;
    std_unordered_multiset.insert(20);
    std_unordered_multiset.insert(20);
    std_unordered_multiset.insert(10);
    print_container(std_unordered_multiset);
    
    //Unordered_Map
    std::cout << "Unordered_Map:" << std::endl;
    std::unordered_map<std::string, int> std_unordered_map;
    std_unordered_map["World"]=20;
    std_unordered_map.insert(std::pair<std::string ,int>("Hello", 10));
    std_unordered_map.insert(std::pair<std::string ,int>("Hello", 20));
    print_map(std_unordered_map);
    
    //Unordered_MultiMap
    std::cout << "Unordered_MultiMap:" << std::endl;
    std::unordered_multimap<std::string, int> std_unordered_multimap;
    std_unordered_multimap.insert(std::pair<std::string ,int>("World", 20));
    std_unordered_multimap.insert(std::pair<std::string ,int>("Hello", 10));
    std_unordered_multimap.insert(std::pair<std::string ,int>("Hello", 20));
    print_map(std_unordered_multimap);
}
