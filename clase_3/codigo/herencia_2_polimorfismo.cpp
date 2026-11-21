#include <iostream>

class Persona {
private:
  std::string nombre;
  int edad;

public:
  Persona(std::string n, int e) {
    this->nombre = n;
    this->edad = e;
  }
  std::string get_nombre() const { return this->nombre; }
  virtual void saludar() const {
    std::cout << "Hola, soy " << this->nombre << std::endl;
  }
};

class Estudiante : public Persona {
private:
  std::string matricula;

public:
  Estudiante(std::string n, int e, std::string m) : Persona(n, e) {
    this->matricula = m;
  }
  void saludar() const override {
    std::cout << "Hola soy" << this->get_nombre()
              << " mi perro se comio mi tarea" << std::endl;
  }

  void mostrarMatricula() { std::cout << this->matricula << std::endl; }
};

class Profesor : public Persona {
private:
  std::string materia;

public:
  Profesor(std::string nombre, int edad, std::string materia)
      : Persona(nombre, edad) {

    this->materia = materia;
  }
};
int main() {
  Persona p1("Juan", 42);
  Profesor p2("Pedro", 45, "atracos");
  Estudiante p3("carlo", 22, "rew453");
  p1.saludar();
  p2.saludar();
  p3.saludar();
  return 0;
}
