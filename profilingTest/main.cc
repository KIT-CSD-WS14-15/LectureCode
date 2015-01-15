#include <iostream>
#include <NumberCruncher.h>
int main ()
{
  std::cout << "Hello world!" << std::endl;

  NumberCruncher numberCruncher;
  std::cout << numberCruncher.sumUpTo(1000);

  return 0;
}
