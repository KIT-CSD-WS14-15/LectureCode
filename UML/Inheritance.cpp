//
//  Inheritance.cpp
//  UML
//
//  Created by Manuel Giffels on 12.11.14.
//  Copyright (c) 2014 Manuel Giffels. All rights reserved.
//

#include<iostream>

class Vehicle {
public:
    virtual void print() const = 0;
protected:
    int m_nwheels;
    int m_age;
};

class Car:public Vehicle {
public:
    Car(int age):Vehicle(){
        m_nwheels = 4;
        m_age = age;
    }
    void print() const {
        std::cout << "Car has " << m_nwheels << " wheels and is " << m_age << " old!" << std::endl;
    }
};

int main(int argc, char* agrv[]) {
    Car my_car(14);
    my_car.print();
    return 0;
}