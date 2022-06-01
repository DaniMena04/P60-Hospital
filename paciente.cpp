#include "paciente.h"

/**
 * @brief Paciente::Paciente    Constructor por defecto
 */
Paciente::Paciente()
{
    this->ID = 0;
    this->edad = 0;
    this->Nombre = "";
    this->positivo = false;

}

/**
 * @brief Paciente::Paciente    Constructor parametrizado
 * @param nombre                Nombre del paciente
 * @param edad                  Edad del paciente
 */
Paciente::Paciente(string Nombre, int edad):Nombre(Nombre), edad(edad)
{
    this->positivo = false;

    // Incrementa los pacientes
    Paciente::totalPacientes++;

    //Asigna el numero actual como ID del paciente
    this->ID = Paciente::totalPacientes;
}

string Paciente::TieneCovid()
{
    /*
    string positivo;
    if(this->positivo){
        positivo = "Positivo";
    }else{
        positivo = "Negativo";
    }

    return positivo;
    */
    return this->positivo ? "Si" : "No";
}

string Paciente::ficha()
{
    string str = "ID: "+ to_string(this->ID) + "\n" +
            "Nombre: "+ this->Nombre + "\n" +
            "Edad: "+ to_string(this->edad) + "\n" +
            "Tiene Covid-19?: "+ TieneCovid() + "\n\n";
    return str;
}

void Paciente::setPositivo(bool newValue)
{
    this->positivo = newValue;
}


