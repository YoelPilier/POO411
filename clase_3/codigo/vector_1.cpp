#include <iostream>
#include <vector>

class Persona {
public:
  Persona(int i) { std::cout << "Hola, mundo " << i << std::endl; }
};

int main() {
  int cantidad = 5;
  std::vector<Persona> personas;

  for (int i = 0; i < cantidad; i++)
    personas.push_back(Persona(i));

  std::cout << "Cantidad " << personas.size() << std::endl;
  personas.pop_back();
  std::cout << "Cantidad " << personas.size() << std::endl;

  return 0;
}
