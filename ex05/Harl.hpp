#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>

#define RESET "\033[0m"
#define RED "\033[1;31m"
#define YELLOW "\033[1;33m"
#define GREEN "\033[1;32m"
#define UNDERLINE "\033[4;37m"

class Harl {
private:
  void debug(void);
  void info(void);
  void warning(void);
  void error(void);

public:
  Harl();
  ~Harl();
  void complain(std::string level);
};
typedef void (Harl::*funcPtr)(void);

#endif
