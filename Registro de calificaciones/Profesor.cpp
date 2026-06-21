#include "Profesor.h"

Profesor::Profesor() {
}

Profesor::Profesor(const std::string& nombreCompleto,
                   const std::string& codigoProfesor)
    : nombreCompleto(nombreCompleto),
      codigoProfesor(codigoProfesor) {
}

std::string Profesor::getNombreCompleto() const {
    return nombreCompleto;
}

std::string Profesor::getCodigoProfesor() const {
    return codigoProfesor;
}
