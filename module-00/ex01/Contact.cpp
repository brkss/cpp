
#include <iostream>
#include <iomanip>
#include "Contact.hpp"

std::string form_field(std::string input){
  if (input.length() > 10)
    return input.substr(0, 9) + '.';
  return input;
}

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
  std::cout << std::right << std::setw(10) << form_field(this->first_name) << " |";
  std::cout << std::right << std::setw(10) << form_field(this->last_name) << " |";
  std::cout << std::right << std::setw(10) << form_field(this->nickname) << " |";
  std::cout << "\n";
}
