#include "Zombie.hpp"
#include <stdlib.h>
int main() {
  std::cout << "Creating a zombie from stack :\n";
  Zombie zombie1("First_zombie");
  zombie1.announce();
  std::cout << "Creating a zombie from heap :\n";
  Zombie *zombie2 = newZombie("Second_zombie");
  zombie2->announce();
  randomChump("random_zombie");
  delete zombie2;
}
