
#include <iostream>
#include <iomanip>
#include "Contact.hpp"

void Contact::add_contact(){
  std::cout << "First Name : ";
  std::cin >> this->first_name;
  std::cout << "Last Name : ";
  std::cin >> this->last_name;
  std::cout << "Nickame : ";
  std::cin >> this->nickname;
  std::cout << "Phone number : ";
  std::cin >> this->phone_number;
  std::cout << "Darkest Secret : ";
  std::cin >> this->darkest_secret;
  std::cout << "Thats it !\n";
}

void Contact::toString(int index) {
  std::cout << std::right << std::setw(10) << index << " |";
  std::cout << std::right << std::setw(10) << this->first_name << " |";
  std::cout << std::right << std::setw(10) << this->last_name << " |";
  std::cout << std::right << std::setw(10) << this->nickname << " |";
  std::cout << "\n";
}
