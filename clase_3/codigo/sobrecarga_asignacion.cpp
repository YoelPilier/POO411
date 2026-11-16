#include <iostream>

class Persona {
  std::string nombre;
  int edad;

public:
  Persona() {}
  Persona(std::string n, int e) : nombre(n), edad(e) {}
  void operator=(const Persona &p) {
    this->nombre = p.nombre;
    this->edad = p.edad;
    std::cout << "Asignacion" << std::endl;
  }
  friend std::ostream &operator<<(std::ostream &os, const Persona &p);
};

std::ostream &operator<<(std::ostream &os, const Persona &p) {
  os << "nombre: " << p.nombre << " edad: " << p.edad << std::endl;
  return os;
}

int main() {

  Persona p1("yoel", 15763);
  Persona p2;
  p2 = p1;

  std::cout << "p1: \n" << p1 << "p2: \n" << p2;

  return 0;
}
