#ifndef ALMACENAMIENTO_H
#define ALMACENAMIENTO_H

#include <vector>

#include "Estudiante.h"
#include "Profesor.h"
#include "Materia.h"
#include "Calificacion.h"

class Almacenamiento {

public:

    static void guardarEstudiantes(
        const std::vector<Estudiante>& estudiantes);

    static void cargarEstudiantes(
        std::vector<Estudiante>& estudiantes);

    static void guardarProfesores(
        const std::vector<Profesor>& profesores);

    static void cargarProfesores(
        std::vector<Profesor>& profesores);

    static void guardarMaterias(
        const std::vector<Materia>& materias);

    static void cargarMaterias(
        std::vector<Materia>& materias);

    static void guardarCalificaciones(
        const std::vector<Calificacion>& calificaciones);

    static void cargarCalificaciones(
        std::vector<Calificacion>& calificaciones,
        const std::vector<Estudiante>& estudiantes,
        const std::vector<Profesor>& profesores,
        const std::vector<Materia>& materias);

};

#endif
