#include <iostream>

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
  Persona *pP1 = nullptr;

  pP1 = &p1;
  p1.Saludar();
  if (pP1 != nullptr) {
    pP1->Saludar();
  }

  return 0;
}
