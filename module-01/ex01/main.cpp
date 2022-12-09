
#include <string>
#include "Zombie.hpp"

int main(){

  int n = 10; 

  Zombie *zombies = zombieHorde(n, "IMPALA"); 
  

 int i = 0;
  while(i < n){
    zombies[i].announce();
    i++;
  }
  delete [] zombies;

}
