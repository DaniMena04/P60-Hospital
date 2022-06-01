#ifndef HOSPITAL_H
#define HOSPITAL_H
// librerias del sistema
#include <vector>
#include <iostream>
//librerias propias
#include "paciente.h"

using namespace std;

class Hospital
{
private:
    string nombre;
    vector<Paciente> pacientes;
public:
    Hospital();
    Hospital (string nombre);
    void ingresarPaciente();
    void listarPacientes();
};

#endif // HOSPITAL_H
