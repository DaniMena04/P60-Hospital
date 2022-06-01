#include <iostream>
#include "paciente.h"
#include "hospital.h"
using namespace std;

// Inicializar la variable estatica
int Paciente::totalPacientes = 0;

int main()
{
    /*
    //Crear un paciente
    Paciente p("Gorgolito Perez", 23);

    // Imprimir la ficha del paciente
    cout << p.ficha();

    // Gorgorito Peres se contagio
    p.setPositivo(true);

    //Volver imprimir
    cout << p.ficha();

    //Crear otro paciente
    Paciente q ("Lolita Caraguay", 20);
    cout << q.ficha();
    */

    Hospital hcam("Hospital Carlos Andrade Marin");
    hcam.ingresarPaciente();
    hcam.listarPacientes();

    return 0;
}
