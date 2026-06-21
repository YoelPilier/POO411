#include "Materia.h"

Materia::Materia()
    : cantidadCreditos(0) {
}

Materia::Materia(const std::string& nombreMateria,
                 const std::string& codigoMateria,
                 int cantidadCreditos)
    : nombreMateria(nombreMateria),
      codigoMateria(codigoMateria),
      cantidadCreditos(cantidadCreditos) {
}

std::string Materia::getNombreMateria() const {
    return nombreMateria;
}

std::string Materia::getCodigoMateria() const {
    return codigoMateria;
}

int Materia::getCantidadCreditos() const {
    return cantidadCreditos;
}
