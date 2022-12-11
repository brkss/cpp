#ifndef HUMANA_H
#define HUMANA_H

#include "Weapon.hpp"

class HumanA {

  private:
    Weapon weapon;
    std::string name;
  public:
    HumanA();
    HumanA(std::string name, Weapon weapon);
    void attack();
};


#endif // DEBUG
