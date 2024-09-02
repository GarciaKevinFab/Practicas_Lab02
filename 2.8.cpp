#include <iostream>
using namespace std;

void calcularPrecioFinal(double *precioOriginal, string *marca, double &precioFinal)
{
    precioFinal = *precioOriginal;

    if (*precioOriginal >= 2000)
    {
        precioFinal *= 0.90; // Descuento del 10%
    }

    if (*marca == "NOSY")
    {
        precioFinal *= 0.95; // Descuento adicional del 5%
    }

    precioFinal *= 1.18; // Añadir IGV (18%)
}

int main()
{
    double *precioOriginal = new double;
    string *marca = new string;
    double precioFinal;

    cout << "Ingresa el precio del estéreo: ";
    cin >> *precioOriginal;
    cout << "Ingresa la marca del estéreo: ";
    cin >> *marca;

    calcularPrecioFinal(precioOriginal, marca, precioFinal);

    cout << "El precio final del estéreo con IGV incluido es: " << precioFinal << endl;

    delete precioOriginal;
    delete marca;

    return 0;
}
