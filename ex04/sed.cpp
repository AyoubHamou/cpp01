#include "sed.hpp"

Sed::Sed(std::string file) {
  this->in = file;
  this->out = file + ".replace";
}

void show_err(std::string err) {
  std::cerr << RED << err << RESET << std::endl;
  std::exit(1);
}

Sed::~Sed() {}

void Sed::replace_occurrence(std::string s1, std::string s2) {
  std::string line;
  size_t start_pos;
  std::ifstream file;
  std::ofstream outfile;

  file.open(in.c_str());
  if (s1.empty())
    show_err("S1 is empty");
  if (!file.is_open())
    show_err("Can't open the file");
  outfile.open(out.c_str());
  std::getline(file, line, '\0');
  if (line.empty())
    show_err("The file is empty");
  file.close();
  start_pos = line.find(s1);
  while (start_pos != std::string::npos) {
    line =
        line.substr(0, start_pos) + s2 + line.substr(start_pos + s1.length());
    start_pos = line.find(s1, start_pos + s2.length());
  }
  outfile << line;
  outfile.close();
}
