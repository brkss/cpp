
#include <iostream>
#include "Contact.hpp"

using namespace std;

void Contact::display(){
  cout << "First name : " + this->first_name << "\n"; 
  cout << "Last name : " + this->last_name << "\n"; 
  cout << "Nickname : " + this->nickname << "\n"; 
  cout << "Phone Number : " + this->phone_number << "\n"; 
}

int main() {


  Contact contact;

  contact.first_name = "Brahim";
  contact.last_name = "Berkasse";
  contact.nickname = "brkss";
  contact.phone_number = "000000000";

  contact.display();

}
