#include <Particle.h>
#include <Particle.h>

#include <iostream>
#include <string>
#include <vector>
#include <map>

using namespace std;

int main()
{
  cout << "Dies ist ein Testprogramm für Collaborative Software Design. " << endl;

  /** Map for storing the decay tree. */
  map<string, vector<string> > decayMap;
  decayMap["B"] = {"D", "Pion"};
  decayMap["D"] = {"Kaon", "Pion", "Pion"};

  /** Container for the Particle objects.*/
  vector<Particle> particles;
  particles.emplace_back("B");

  for (auto iter = particles.begin(); iter != particles.end(); iter++) {
    for (auto & name : decayMap[(*iter).getName()]) {
      particles.emplace_back(name);
      (*iter).addDaughter(particles.back());
    }
  }

  cout << "Wir haben so viele Teilchen in unserem Baum: " << particles.size() << endl;
  cout << "Die Zahl der B Töchter ist: " << particles[0].getNDaughters()      << endl;
}
