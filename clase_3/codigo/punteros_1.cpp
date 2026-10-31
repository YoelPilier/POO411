#include <iostream>

void cambiar(int x) {
  x = 2;
  std::cout << "Direccion copia" << (&x) << std::endl;
}

void cambiar_referencia(int &x) {
  x = 2;
  std::cout << "Direccion referencia " << (&x) << std::endl;
}
void cambiar_puntero(int *x) {
  *x = 2;
  std::cout << "Direccion a la que apunta el puntero " << x << std::endl;

  std::cout << "Direccion puntero " << (&x) << std::endl;
}

int main() {
  int a = 10;
  cambiar(a);
  cambiar_referencia(a);
  cambiar_puntero(&a);
  std::cout << "El valor de a es : " << a << std::endl
            << " y su direccion es:" << (&a) << std::endl;

  return 0;
}
