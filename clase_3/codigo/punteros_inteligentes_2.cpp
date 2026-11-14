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

  std::unique_ptr<Persona> pP1 = std::make_unique<Persona>(0);

  pP1->Saludar();
  (*pP1.get()).Saludar();
  std::cout << "Dirección de memoria: " << pP1.get() << std::endl;
  return 0;
}
