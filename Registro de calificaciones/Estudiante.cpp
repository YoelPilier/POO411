#include "Estudiante.h"

Estudiante::Estudiante() {
}

Estudiante::Estudiante(const std::string& nombreCompleto,
                       const std::string& matricula,
                       const std::string& sesion)
    : nombreCompleto(nombreCompleto),
      matricula(matricula),
      sesion(sesion) {
}

std::string Estudiante::getNombreCompleto() const {
    return nombreCompleto;
}

std::string Estudiante::getMatricula() const {
    return matricula;
}

std::string Estudiante::getSesion() const {
    return sesion;
}
