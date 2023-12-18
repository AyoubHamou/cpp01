#include "sed.hpp"

int main(int ac, char **av) {
  if (ac != 4)
    show_err("Usage: ./Sed filename \"to_find\" \"replace\"");
  else {
    Sed sed(av[1]);
    sed.replace_occurrence(av[2], av[3]);
  }
}
