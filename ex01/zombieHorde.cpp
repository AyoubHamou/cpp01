#include "Zombie.hpp"

Zombie *zombieHorde(int N, std::string name) {
  if (N <= 0) {
    std::cerr << RED << "N must be bigger than 0" << RESET << std::endl;
    return NULL;
  }
  Zombie *zombies = new Zombie[N];
  for (int i = 0; i < N; i++) {
    zombies[i].names(name);
  }
  return zombies;
}
