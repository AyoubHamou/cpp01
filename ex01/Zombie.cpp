#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie(){};
Zombie::~Zombie() {
  std::cout << RED << this->name << ": has been destroyed 💀" << RESET
            << std::endl;
}
void Zombie::announce(void) {
  std::cout << UNDERLINE << this->name << ": BraiiiiiiinnnzzzZ..." << RESET
            << std::endl;
};
void Zombie::names(std::string name) { this->name = name; }
