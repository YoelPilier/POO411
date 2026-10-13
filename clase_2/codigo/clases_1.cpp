#include <iostream>

class Persona {

public:
  std::string nombre;
  int edad;
};

int main() {
  Persona p1;
  p1.nombre = "Juan";
  p1.edad = 4;

  std::cout << p1.nombre << " tiene " << p1.edad << " anos" << std::endl;
  return 0;
}
