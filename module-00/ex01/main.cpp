
#include <iomanip>
#include <iostream>
#include <ostream>
#include <string>
#include "PhoneBook.hpp"


int main(){

  PhoneBook phonebook;
  std::string cmd;

  std::cout << "Welcome To Your Phonebok : \n";
  while(1){
    
    std::cout << "[ADD | SEARCH | EXIT] > ";
    std::cin >> cmd;
    if(std::cin.eof())
      break;
    if(cmd == "ADD"){
      phonebook.add();
    }
    else if(cmd == "SEARCH"){
      phonebook.search();
    }
    else if(cmd == "EXIT"){
      break;
    }
    else {
      std::cout << "INVALID COMMAND !";
    }
  }

}
