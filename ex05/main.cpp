#include "Harl.hpp"

int main() {
  std::string input;
  Harl harl;

  while (true) {
    std::cout << "Enter a level: ";
    getline(std::cin, input);
    if (std::cin.eof())
      return 0;
    harl.complain(input);
  }
}
