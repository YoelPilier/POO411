#include <iostream>

class Identificacion {
  std::string cedula;

public:
  std::string get_cedula() { return this->cedula; }
  Identificacion(std::string c) : cedula(c) {}
  Identificacion() {}
};

class Persona {
  Identificacion cedula;

protected:
  std::string nombre;

public:
  Persona(std::string n, std::string c) {
    this->cedula = Identificacion(c);

    this->nombre = n;
  }

  void saludar() {
    std::cout << "Hola, soy " << this->nombre << " mi cedula es "
              << this->cedula.get_cedula() << std::endl;
  }

  virtual ~Persona() = default;
};

int main() {
  auto p1 = Persona("Juan", "026wiejrgpwoij");
  p1.saludar();
  return 0;
}
