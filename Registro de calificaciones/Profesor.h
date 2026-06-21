#ifndef PROFESOR_H
#define PROFESOR_H

#include <string>

class Profesor {
private:
    std::string nombreCompleto;
    std::string codigoProfesor;

public:
    Profesor();
    Profesor(const std::string& nombreCompleto,
             const std::string& codigoProfesor);

    std::string getNombreCompleto() const;
    std::string getCodigoProfesor() const;
};

#endif
