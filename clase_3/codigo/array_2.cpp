#include <iostream>

class Persona {
public:
  Persona() { std::cout << "Hola, mundo" << std::endl; }
};

int main() {
  int cantidad = 5;

  Persona personas[cantidad];

  for (int i = 0; i < cantidad; i++)
    personas[i] = Persona();

  return 0;
}
