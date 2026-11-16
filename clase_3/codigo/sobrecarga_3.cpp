#include <iostream>
#include <utility>

class Persona {
private:
  std::string nombre;
  std::string oficio;
  unsigned int edad;

public:
  Persona() {
    this->nombre = "nombre";
    this->oficio = "sin";
    this->edad = 1;
    std::cout << "constructor por defecto" << std::endl;
  }
  Persona(std::string nombre, std::string oficio, unsigned int edad)
      : nombre(nombre), oficio(oficio), edad(edad) {
    std::cout << "constructor inicial" << std::endl;
  }

  // constructor copia
  Persona(const Persona &otro) {
    this->nombre = otro.nombre;
    this->edad = otro.edad;
    this->oficio = "";
    std::cout << "constructor de copia" << std::endl;
  }
  // constructor de movimiento
  //
  Persona(Persona &&otro) {
    this->nombre = std::move(otro.nombre);
    this->oficio = std::move(otro.oficio);
    this->edad = otro.edad;
    std::cout << "Constructor de movimiento" << std::endl;
  }

  void Saludos() {

    std::cout << "Saludos mi nombre es " << this->nombre << " mi edad es "
              << this->edad << " y mi oficio es " << this->oficio << std::endl;
  }
};

int main() {
  Persona p1;
  p1.Saludos();
  Persona p2("yoel", "sin", 453);
  p2.Saludos();
  Persona p3(p2);
  p3.Saludos();
  Persona p4(std::move(p2));
  p4.Saludos();
  p2.Saludos();
  return 0;
}
