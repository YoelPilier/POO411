#include <iostream>

template <typename T> T suma(T a, T b) { return a + b; }

template <typename T> class Persona {
public:
  Persona(T a) { std::cout << "yo represento " << a << std::endl; }
};
int main() {
  auto r1 = suma<int>(4, 5);
  auto r2 = suma<std::string>("4", "5");
  auto p1 = Persona<int>(4);

  std::cout << "r1 es " << r1 << std::endl;

  std::cout << "r2 es " << r2 << std::endl;

  return 0;
}
