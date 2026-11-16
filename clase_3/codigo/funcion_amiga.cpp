#include <iostream>

class Persona {
  std::string nombre;
  int edad;

public:
  Persona(std::string n, int e) : nombre(n), edad(e) {}
  friend void Mostrar_persona(const Persona &persona);
};

void Mostrar_persona(const Persona &p) {

  std::cout << "Mi nombre es " << p.nombre << "y mi edad es " << p.edad
            << std::endl;
}
int main() {

  Persona p1("yoel", 15763);
  Mostrar_persona(p1);
  return 0;
}
