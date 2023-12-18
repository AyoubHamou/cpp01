#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

#define RESET "\033[0m"
#define RED "\033[1;31m"
#define YELLOW "\033[1;33m"
#define GREEN "\033[1;32m"
#define UNDERLINE "\033[4;37m"

class Zombie {
private:
  std::string name;

public:
  Zombie();
  ~Zombie();
  void announce(void);
  void names(std::string name);
};
Zombie *zombieHorde(int N, std::string name);
#endif
