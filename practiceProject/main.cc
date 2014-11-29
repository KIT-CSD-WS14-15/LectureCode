#include <iostream>
#include <Particle.h>

using namespace std;
int main()
{
  cout << "Dies ist ein Testprogramm für Collaborative Software Design. " << endl;

  Particle particle;
  cout << "Zahl der Töchter von Particle: " << particle.getNDaughters() << endl;
}
