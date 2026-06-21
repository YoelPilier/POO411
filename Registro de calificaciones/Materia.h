#ifndef MATERIA_H
#define MATERIA_H

#include <string>

class Materia {
private:
    std::string nombreMateria;
    std::string codigoMateria;
    int cantidadCreditos;

public:
    Materia();
    Materia(const std::string& nombreMateria,
            const std::string& codigoMateria,
            int cantidadCreditos);

    std::string getNombreMateria() const;
    std::string getCodigoMateria() const;
    int getCantidadCreditos() const;
};

#endif
