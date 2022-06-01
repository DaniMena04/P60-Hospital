#include "hospital.h"

Hospital::Hospital()
{
    this->nombre = "";
}

Hospital::Hospital(string nombre)
{
    this->nombre = nombre;
}

void Hospital::ingresarPaciente()
{
    string nombre;
    int edad;
    bool estaContagiado;

    cout << "\nIngrese el nombre del paciente: ";
    getline(cin,nombre);
    cout << "\nIngrese la edad del paciente: ";
    cin >> edad;
    // CRear paciente
    Paciente p(nombre,edad);

    cout << p.ficha();
    //Tene covid?
    cout << "¿El paciente tiene Covid?: \n";
    cout << "1: Si\n0: No\n";
    cout << "Ingrese el valor de la prueba: ";
    cin >> estaContagiado;

    //Establecer el valor
    p.setPositivo(estaContagiado);

    //Agrear al paciente a la lista de pacientes
    this->pacientes.push_back(p); //Sirve solo en vectores

    //limpiar el buffer de entrada
    cin.ignore();
}

void Hospital::listarPacientes()
{
    cout << "\n= " +this->nombre + " = =\n";
    //Recorrer las lista de pacientes
    for(Paciente p : this->pacientes){
        cout << p.ficha();
    }
}
