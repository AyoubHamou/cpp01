#include "Zombie.hpp"

int main() {
  int n = 5;
  std::string name = "Ayoub";

  std::cout << "Creating " << n << " Zombies" << std::endl;
  Zombie *zombies = zombieHorde(n, name);
  std::cout << "Zombies announces :" << std::endl;
  for (int i = 0; i < n; i++)
    zombies[i].announce();
  std::cout << "Killing the zombies :" << std::endl;
  delete[] zombies;
}
