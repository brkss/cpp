
#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>

class Zombie {
  private:
    std::string name;
  public:
    Zombie(std::string);
    ~Zombie();
    void announce(void);
};


#endif // !ZOMBIE_HPP
