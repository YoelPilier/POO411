#include <iostream>

class Calculadora {
public:
  int Sumar(int a, int b) { return a + b; }

  float Sumar(float a, float b) { return a + b; }
  double Sumar(double a, double b) { return a + b; }
  std::string Sumar(std::string a, std::string b) { return a + b; }
};

int main() {
  Calculadora cal;

  std::cout << cal.Sumar(3, 4) << std::endl;
  std::cout << cal.Sumar(0.33f, 0.34f) << std::endl;
  std::cout << cal.Sumar(3.3, 4.4) << std::endl;
  std::cout << cal.Sumar("3", "4") << std::endl;

  return 0;
}
