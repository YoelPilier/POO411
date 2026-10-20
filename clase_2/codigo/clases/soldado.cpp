#include "soldado.h"
#include <iostream>

Soldado::Soldado(std::string _nombre, std::string _oficio) {

  this->nombre = _nombre;
  this->oficio = _oficio;
  this->vida = 10;
}

Soldado::~Soldado() { std::cout << "¡Ha muerto!" << std::endl; }

bool Soldado::get_estado() { return this->vida > 0; }

void Soldado::recibir_dano(int dano) {
  std::cout << "hit" << std::endl;
  this->vida -= dano;
}
