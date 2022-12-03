
#include <string>
#include "Contact.hpp"

class PhoneBook {

  private:
      Contact contact[8];
      int curr;
      int size;
  public:
      PhoneBook();
      void add();
      void search();

};
