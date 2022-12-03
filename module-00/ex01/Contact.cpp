

#include <iostream>
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

void Contact::toString() {
  std::cout << "First name : " + this->first_name + "\n";
  std::cout << "Last name : " + this->last_name + "\n";
  std::cout << "Phone Number : " + this->phone_number + "\n";
  std::cout << "Nickname : " + this->nickname + "\n";
  std::cout << "Darkest Secret : " + this->darkest_secret + "\n";
}
