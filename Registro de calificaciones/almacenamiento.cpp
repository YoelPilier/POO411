#include "Almacenamiento.h"

#include <fstream>
#include <sstream>

void Almacenamiento::guardarEstudiantes(
    const std::vector<Estudiante>& estudiantes)
{
    std::ofstream archivo("estudiantes.txt");

    for (const Estudiante& e : estudiantes) {
        archivo << e << '\n';
    }
}

void Almacenamiento::cargarEstudiantes(
    std::vector<Estudiante>& estudiantes)
{
    std::ifstream archivo("estudiantes.txt");

    std::string linea;

    while (std::getline(archivo, linea)) {

        std::stringstream ss(linea);

        std::string nombre;
        std::string matricula;
        std::string sesion;

        std::getline(ss, nombre, '|');
        std::getline(ss, matricula, '|');
        std::getline(ss, sesion);

        estudiantes.push_back(
            Estudiante(nombre, matricula, sesion)
        );
    }
}
