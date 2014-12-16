#include <Particle.h>
#include <Logger.h>
#include <iostream>

using namespace std;

unsigned Particle::getNDaughters() const
{
  unsigned counter = m_directDaughters.size();
  for (auto & daughterPtr : m_directDaughters) {
    counter += daughterPtr->getNDaughters();
  }
  return counter;
}

void Particle::addDaughter(const Particle& particle)
{
  INFO("Adding particle " << particle.getName() 
    << " to the particle " << m_name);
  m_directDaughters.push_back(&particle);
}

std::string Particle::getName() const
{
  return m_name;
}
