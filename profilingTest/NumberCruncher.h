#pragma once
#include <iostream>

class NumberCruncher
{
public:
  int sumUpTo(int number){
    int current = 0;
    for (int ii = 1; ii<= number; ++ii){
      current = sum(current, ii);
      for (int jj = 0; jj < 1000000; ++jj){
        ;
      }
    }
    return current;
  }

private:
  int sum(int number1, int number2 ){
    for (int jj = 0; jj < 1000000; ++jj){
      ;
    }
    return number1 + number2;
  }
};
