

#include <iostream>
#include <string>
#include "HumanA.hpp"
#include "Weapon.hpp"

HumanA::HumanA(std::string name, Weapon weapon){
  this->name = name;
  this->weapon = weapon;
}

void HumanA::attack(){
  std::cout << this->name + " attacks with their " + this->weapon.getType() + "\n";
}
