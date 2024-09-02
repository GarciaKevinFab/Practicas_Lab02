#include <iostream>
using namespace std;

void calcularCostoInternacion(int *tipoTratamiento, int *dias, int *edad, double &costoTotal)
{
    double costoPorDia;

    switch (*tipoTratamiento)
    {
    case 1:
        costoPorDia = 2800;
        break;
    case 2:
        costoPorDia = 1950;
        break;
    case 3:
        costoPorDia = 2500;
        break;
    case 4:
        costoPorDia = 1150;
        break;
    default:
        cout << "Tipo de tratamiento inválido." << endl;
        return;
    }

    costoTotal = costoPorDia * (*dias);

    if (*edad > 60)
    {
        costoTotal *= 0.75; // Descuento del 25%
    }
    else if (*edad < 25)
    {
        costoTotal *= 0.85; // Descuento del 15%
    }
}

int main()
{
    int *tipoTratamiento = new int;
    int *dias = new int;
    int *edad = new int;
    double costoTotal;

    cout << "Ingresa el tipo de tratamiento (1-4): ";
    cin >> *tipoTratamiento;
    cout << "Ingresa el número de días: ";
    cin >> *dias;
    cout << "Ingresa la edad del cliente: ";
    cin >> *edad;

    calcularCostoInternacion(tipoTratamiento, dias, edad, costoTotal);

    cout << "El costo total de la internación es: " << costoTotal << endl;

    delete tipoTratamiento;
    delete dias;
    delete edad;

    return 0;
}
