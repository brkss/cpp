

#include <string>
#include "Zombie.hpp"




Zombie *zombieHorde(int n, std::string name){
  Zombie *zombies = new Zombie[n];

  int i = 0;
  while(i < n){
    zombies[i] = Zombie(name);
    i++;
  }

  return zombies;
}
