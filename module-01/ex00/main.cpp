

#include <string>
#include "Zombie.hpp"
#include <iostream>

Zombie *newZombie(std::string name){
  Zombie *z;
  z = new Zombie(name);

  return z;
}

void randomChump( std::string name){
  Zombie *z = newZombie(name);
  z->announce();
  delete z;
}

int main(){

  randomChump("zombie 1");
  randomChump("zombie 2");


}
