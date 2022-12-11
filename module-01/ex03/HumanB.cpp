

#include <iostream>
#include "HumanB.hpp"
#include "Weapon.hpp"

HumanB::HumanB(){

}

HumanB::HumanB(std::string name){
  this->name = name;
}

void HumanB::setWeapon(Weapon weapon){
  this->weapon = weapon;
}

void HumanB::attack(){
  std::cout << this->name + " attacks with their " + this->weapon.getType() + "\n";
}
