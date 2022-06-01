#ifndef PACIENTE_H
#define PACIENTE_H
#include <string>
using namespace std;

class Paciente
{
private:

    int ID;             //Numero de identificacion
    string Nombre;      // Nombre del paciente
    int edad;           //Edad del paciente
    bool positivo;     //Si dio positivo o no para la prueba del codigo de Covid-19
    string TieneCovid();

public:
    static int totalPacientes;  //Contador estatico para el numero de pacientes que se crean
    Paciente();
    Paciente(string nombre, int edad);
    string ficha();
    void setPositivo(bool newValue);

};

#endif // PACIENTE_H
