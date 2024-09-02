#include <iostream>
using namespace std;

void calcularPrecioFinalVehiculo(double *precioBase, string *modelo, double &precioFinal)
{
    if (*modelo == "Toyota")
    {
        precioFinal = *precioBase * 0.92; // Descuento del 8%
    }
    else if (*modelo == "Renault")
    {
        precioFinal = *precioBase * 0.95; // Descuento del 5%
    }
    else if (*modelo == "Chevy")
    {
        precioFinal = *precioBase * 0.94; // Descuento del 6%
    }
    else if (*modelo == "Nissan")
    {
        precioFinal = *precioBase * 0.91; // Descuento del 9%
    }
    else
    {
        precioFinal = *precioBase; // Sin descuento
    }
}

int main()
{
    double *precioBase = new double;
    string *modelo = new string;
    double precioFinal;

    cout << "Ingresa el precio base del vehículo: ";
    cin >> *precioBase;
    cout << "Ingresa el modelo del vehículo (Toyota, Renault, Chevy, Nissan): ";
    cin >> *modelo;

    calcularPrecioFinalVehiculo(precioBase, modelo, precioFinal);

    cout << "El precio final del vehículo es: " << precioFinal << endl;

    delete precioBase;
    delete modelo;

    return 0;
}
