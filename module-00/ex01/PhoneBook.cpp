
#include <string>
#include <iostream>
#include "PhoneBook.hpp"
#include <iomanip>

PhoneBook::PhoneBook(){
  this->curr = 0;
  this->size = 0;
}

void PhoneBook::add(){
  if(this->curr >= 8){
    this->curr = 0; 
  }
  this->contact[this->curr].add_contact();
  this->curr++;
  if(this->size < 8)
    this->size++; 
}

void PhoneBook::search() {
  int i = 0;
  std::string val;
  int index = -1;

  std::cout << std::right << std::setw(10) << "Index" << " |";
  std::cout << std::right << std::setw(10) << "F Name" << " |";
  std::cout << std::right << std::setw(10) << "L Name" << " |";
  std::cout << std::right << std::setw(10) << "Nickname" << " |\n";
  while(i < this->size){
    this->contact[i].toString(i);
    i++;
  }
  std::cout << "ENTER INDEX : ";
  std::cin >> val ;
  
  index = val[0]-'0';

  if (val.length() != 1 || index >= this->size || index < 0){
    std::cout << "Invaldi index !\n";
    return;
  }

  this->contact[index].show();
}
