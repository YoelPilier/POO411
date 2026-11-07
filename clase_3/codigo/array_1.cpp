#include <iostream>

int main() {
  int numeros_1[4] = {0};
  for (int i = 0; i < 4; i++) {

    std::cout << "Sin valores " << numeros_1[i] << std::endl;
    numeros_1[i] = i + 1;

    std::cout << "Con valores " << numeros_1[i] << std::endl;
    std::cout << "Dirección " << (&numeros_1) + i << std::endl;
  }
  return 0;
}
