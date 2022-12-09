#include <string>
#include <iostream>
#include "Zombie.hpp"

void Zombie::announce(){
  std::cout << this->name + ": BraiiiiiiinnnzzzZ...\n";
}

Zombie::Zombie(std::string name){
  this->name = name;
}

Zombie::~Zombie(){
  std::cout << this->name + " is out !\n";
}
