#include "Harl.hpp"
#include <string>

Harl::Harl() {}

Harl::~Harl() {}

void Harl::debug(void) {
  std::cout << GREEN << "[DEBUG]" << RESET << std::endl;
  std::cout
      << "I love having extra bacon for my "
         "7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!"
      << std::endl;
}
void Harl::info(void) {
  std::cout << UNDERLINE << "[INFO]" << RESET << std::endl;
  std::cout
      << "I cannot believe adding extra bacon costs more money. You didn’t put "
         "enough bacon in my burger! If you did, I wouldn’t be asking for more!"
      << std::endl;
}
void Harl::warning(void) {
  std::cout << YELLOW << "[WARNING]" << RESET << std::endl;
  std::cout
      << "I think I deserve to have some extra bacon for free. I’ve been "
         "coming for years whereas you started working here since last month."
      << std::endl;
}
void Harl::error(void) {
  std::cout << RED << "[ERROR]" << RESET << std::endl;
  std::cout << "This is unacceptable! I want to speak to the manager now."
            << std::endl;
}

void Harl::complain(std::string level) {
  std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
  int i = 4;
  while (i--) {
    if (!levels[i].compare(level))
      break;
  }
  switch (i) {
  case 0:
    this->debug();
  case 1:
    this->info();
  case 2:
    this->warning();
  case 3:
    this->error();
  default:
    std::cout << "[ Probably complaining about insignificant problems ]"
              << std::endl;
  }
}
