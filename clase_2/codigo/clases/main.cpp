#include "soldado.h"
#include <iostream>

int main() {
  Soldado soldado1("salud", "motoconcho");
  soldado1.recibir_dano(50);

  return 0;
}
