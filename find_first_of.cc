#include <iostream>
#include <string>

int main() {
  std::string word_introduced;
  std::string letter_to_find = "";

  std::cout << "Introduzca una palabra y seguidamente una letra, el programa dirá en que posición se encuentra la letra introducida. " << std::endl;

  std::cin >> word_introduced >> letter_to_find;

  size_t look_for = word_introduced.find(letter_to_find);

  if (look_for != std::string::npos) {
      std::cout << "Se ha encontrado la letra " << letter_to_find << " en la posición " << look_for + 1 << std::endl;
  }
  else {
      std::cout << "El caracter introducido no se encuentra en la palabra." << std::endl;
  }
}