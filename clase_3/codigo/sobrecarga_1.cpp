#include <iostream>

void imprimir(int numero) { std::cout << numero << std::endl; }

void imprimir(std::string x) { std::cout << x << std::endl; }
int main() {
  imprimir(43);
  imprimir("Yoel");

  return 0;
}
