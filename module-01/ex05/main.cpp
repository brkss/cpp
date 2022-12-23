

#include "Harl.hpp"
#include <iostream>

int main(){

        Harl harl;

        std::cout << "\nWARNING----------\n";
        harl.complain("WARNING");

        std::cout << "\nINFO----------\n";
        harl.complain("INFO");
}