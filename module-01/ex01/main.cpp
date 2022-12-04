
#include <string>
#include "Zombie.hpp"

Zombie* zombieHorde( int n, std::string name){
  Zombie* zombies = new Zombie[n]; 
  int i = 0;

  while(i < n){
    zombies[i] = Zombie(name);
    i++;
  }
  i = 0;
  /*while(i < n){
    zombies[i].announce();
    i++;
  }*/
  return zombies;
}

int main(){

  int n = 10; 

  Zombie *zombies = zombieHorde(n, "IMPALA"); 
  //zombieHorde(n, "IMPALA"); 

  int i = 0;
  
  while(i < n){
    zombies[i].announce();
    i++;
  }


}
