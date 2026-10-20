#pragma once

#include <string>

class Soldado {
  std::string nombre;
  std::string oficio;
  int vida;

public:
  Soldado(std::string _nombre, std::string _oficio);
  ~Soldado();
  bool get_estado();
  void recibir_dano(int dano);
};
