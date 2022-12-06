

#include <string>
#include <iostream> 


int main(){

  std::string a = "HI THIS IS BRAIN";
  std::string *stringPTR = &a;
  std::string stringREF = a;

  std::cout << &a << " \n";
  std::cout << stringPTR << "\n";
  std::cout << &stringREF << "\n";


  std::cout << a << "\n";
  std::cout << *stringPTR << "\n";
  std::cout << stringREF << "\n";

}
