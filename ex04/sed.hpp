#ifndef SED_HPP
#define SED_HPP

#include <cstdlib>
#include <fstream>
#include <iostream>
#include <string>

#define RESET "\033[0m"
#define RED "\033[1;31m"
#define YELLOW "\033[1;33m"
#define GREEN "\033[1;32m"
#define UNDERLINE "\033[4;37m"

class Sed {
private:
  std::string in;
  std::string out;

public:
  Sed(std::string file);
  ~Sed();
  void replace_occurrence(std::string s1, std::string s2);
};

void show_err(std::string err);

#endif
