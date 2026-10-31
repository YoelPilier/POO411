#include <iostream>

class Persona {
  int id;

public:
  Persona(int id) {
    this->id = id;
    std::cout << "nacido " << this->id << std::endl;
  }
  ~Persona() { std::cout << "muerto " << this->id << std::endl; }
};
int main() {
  Persona p1(0);
  if (true) {
    Persona p2(1);
    Persona *p3 = new Persona(2);
    Persona p4(3);
    delete p3;
  }

  return 0;
}
