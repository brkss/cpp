

#include "Harl.hpp"

Harl::Harl(){
  
}

void Harl::debug(){
  std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!\n";  
}

void Harl::info(){
  std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!\n";
}

void Harl::warning(){
  std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month.\n";
}

void Harl::error(){
  std::cout << "This is unacceptable! I want to speak to the manager now.\n";
}

void comment(Harl *harl, void(Harl::*cmt)(void)){
  (harl->*cmt)();
}

void Harl::complain(std::string level){
  Harl harl;
  void (Harl::*talks[])(void) = { &Harl::debug, &Harl::info, &Harl::warning, &Harl::error };
  std::string taks_ref[] = {"DEBUG", "INFO", "WARNING", "ERROR"};

  for(int i = 0; i < 5; i++){
    if(taks_ref[i] == level){
      comment(&harl, talks[i]);
    }
  }

}
