#include <Particle.h>
#include <iostream>

using namespace std;

unsigned Particle::getNDaughters() const
{
  return 0;
}

void Particle::addDaughter(const Particle& particle)
{
  cout << "Adding particle "  << particle.getName()
       << " to the particle " << m_name << endl;
}

std::string Particle::getName() const
{
  return m_name;
}
