#include "HumanB.hpp"

HumanB::HumanB(std::string str) : name(str), wp(NULL) {}

HumanB::~HumanB() {}

void HumanB::attack() {
  if (this->wp) {
    std::cout << GREEN << this->name << " attacks with their "
              << this->wp->getType() << RESET << std::endl;
  } else
    std::cout << RED << this->name << " doesn't have a weapon to attack."
              << RESET << std::endl;
}

void HumanB::setWeapon(Weapon &wp) { this->wp = &wp; }
