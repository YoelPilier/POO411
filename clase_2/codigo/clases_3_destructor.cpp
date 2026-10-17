#include <iostream>

class Persona {
  std::string nombre;
  int edad;

public:
  Persona(std::string _nombre, int _edad) {
    this->nombre = _nombre;
    this->edad = _edad;
    std::cout << this->nombre << " ha nacido!" << std::endl;
  }

  ~Persona() { std::cout << this->nombre << " ha muerto" << std::endl; }

  int get_edad() { return this->edad; }
  void set_edad() { this->edad++; }

  void Saludar() { std::cout << "Hola soy " << this->nombre << std::endl; }
};

int main() {
  Persona p1("Petronilo", 4);
  if (true) {
    Persona *p2 = new Persona("pepito", 3);
    delete p2;
  }
  p1.Saludar();
  std::cout << "después de una corta vida" << std::endl;
  return 0;
}
