#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>
#include <string>

#define RESET "\033[0m"
#define RED "\033[1;31m"
#define YELLOW "\033[1;33m"
#define GREEN "\033[1;32m"
#define UNDERLINE "\033[4;37m"

class Weapon {
private:
  std::string type;

public:
  Weapon(std::string type);
  ~Weapon();
  void setType(std::string type);
  const std::string &getType();
};

#endif
