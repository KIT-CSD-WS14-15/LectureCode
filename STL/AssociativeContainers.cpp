//
//  AssociativeContainers.cpp
//  STL
//
//  Created by Manuel Giffels on 25.11.14.
//  Copyright (c) 2014 Manuel Giffels. All rights reserved.
//

#include<iostream>
#include<string>
#include<set>
#include<map>

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
    //Set
    std::cout << "Set:" << std::endl;
    std::set<int> std_set;
    std_set.insert(20);
    std_set.insert(20);
    std_set.insert(10);
    print_container(std_set);
    
    //MultiSet
    std::cout << "MultiSet:" << std::endl;
    std::multiset<int> std_multiset;
    std_multiset.insert(20);
    std_multiset.insert(20);
    std_multiset.insert(10);
    print_container(std_multiset);
    
    //Map
    std::cout << "Map:" << std::endl;
    std::map<std::string, int> std_map;
    std_map.insert(std::pair<std::string ,int>("Hello", 10));
    std_map["World"]=20;
    std_map.insert(std::pair<std::string ,int>("Hello", 20));
    print_map(std_map);
    
    //MultiMap
    std::cout << "MultiMap:" << std::endl;
    std::multimap<std::string, int> std_multimap;
    std_multimap.insert(std::pair<std::string ,int>("Hello", 10));
    std_multimap.insert(std::pair<std::string ,int>("World", 20));
    std_multimap.insert(std::pair<std::string ,int>("Hello", 20));
    print_map(std_multimap);
}

