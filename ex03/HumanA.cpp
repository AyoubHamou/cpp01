#include "HumanA.hpp"
#include "Weapon.hpp"

HumanA::HumanA(std::string str, Weapon &weapon) : name(str), wp(weapon) {}

void HumanA::attack() {
  std::cout << GREEN << this->name << " attacks with their "
            << this->wp.getType() << RESET << std::endl;
}

HumanA::~HumanA() {}
