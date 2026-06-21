#ifndef SISTEMA_H
#define SISTEMA_H

#include <vector>

#include "Estudiante.h"
#include "Profesor.h"
#include "Materia.h"
#include "Calificacion.h"

class Sistema {
private:
    std::vector<Estudiante> estudiantes;
    std::vector<Profesor> profesores;
    std::vector<Materia> materias;
    std::vector<Calificacion> calificaciones;

public:
    Sistema();

    void ejecutar();

    void registrarEstudiante();
    void registrarProfesor();
    void registrarMateria();
    void registrarCalificacion();

    void verEstudiantes() const;
    void verProfesores() const;
    void verMaterias() const;
    void verCalificaciones() const;

    void cargarDatos();
    void guardarDatos();

    int mostrarMenu() const;
};

#endif
