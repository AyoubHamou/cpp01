#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie(std::string name) : name(name) {
  std::cout << GREEN << name << ": Has been Created" << RESET << std::endl;
};

void Zombie::announce(void) {
  std::cout << UNDERLINE << name << ": BraiiiiiiinnnzzzZ..." << RESET
            << std::endl;
};
Zombie::~Zombie() {
  std::cout << RED << name << ": has been destroyed 💀" << RESET << std::endl;
}
