#include <iostream>

class Persona {
  std::string nombre;
  int edad;

public:
  Persona(std::string _nombre, int _edad) {
    this->nombre = _nombre;
    this->edad = _edad;
  }

  int get_edad() { return this->edad; }
  void set_edad() { this->edad++; }

  void Saludar() { std::cout << "Hola soy " << this->nombre << std::endl; }
};

int main() {
  Persona p1("Juan", 4);

  p1.Saludar();
  p1.set_edad();
  std::cout << p1.get_edad();
  return 0;
}
