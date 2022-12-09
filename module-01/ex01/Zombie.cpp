#include <string>
#include <iostream>
#include "Zombie.hpp"

Zombie::Zombie(){

}

void Zombie::announce(){
  std::cout << this->name + ": BraiiiiiiinnnzzzZ...\n";
}

Zombie::Zombie(std::string name){
  this->name = name;
}

Zombie::~Zombie(){
}
