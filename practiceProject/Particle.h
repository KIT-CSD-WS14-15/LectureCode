#include <string>

/** This is a base class for particles in out Project.
 *
 *  Later we will subclass this.
 */
class Particle {
public:
  /** Constructing Particle with a name.
   *
   *  The syntax after the colon means, that the member m_name will be constructed
   *  with the value of the argument name and is called an initialization list.
   */
  Particle(const std::string& name) :
    m_name(name) {
  }

  /** Getter for Numer of Daughter Particles.
   *
   *  The "const" tells the compiler, that it is not allowed to change a member of the class Particle
   *  inside the function. <br>
   *  This function is only DECLARED here, but DEFINED in a separate .cc file.
   *  @TODO The real implementation is still missing.
   */
  unsigned getNDaughters() const;

  /** Adding a daughter Particle to this Particle.
   *
   *  @TODO Implementation is missing.
   */
  void addDaughter(const Particle& particle);

  /** Getter for the name of the particle.*/
  std::string getName() const;

private:
  std::string m_name;
};