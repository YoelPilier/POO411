#include <iostream>
#include <memory>

class Persona {
  int id;

public:
  Persona(int id) {
    this->id = id;
    std::cout << "Nacido " << this->id << std::endl;
  }
  void Saludar() {
    std::cout << "Hola, ¿cómo estás? Soy " << this->id << std::endl;
  }
  ~Persona() { std::cout << "Muerto " << this->id << std::endl; }
};
int main() {

  Persona p1(0);
  Persona *ptr_crudo = new Persona(2);
  std::unique_ptr<Persona> pP1 = std::make_unique<Persona>(1);

  p1.Saludar();
  pP1->Saludar();
  ptr_crudo->Saludar();

  delete ptr_crudo;
  return 0;
}
