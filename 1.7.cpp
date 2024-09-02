#include <iostream>
using namespace std;

void calcularDescuento(double *precioOriginal, int clave, double &precioFinal)
{
    if (clave == 1)
    {
        precioFinal = *precioOriginal * 0.90; // 10% de descuento
    }
    else if (clave == 2)
    {
        precioFinal = *precioOriginal * 0.80; // 20% de descuento
    }
    else
    {
        precioFinal = *precioOriginal;
    }
}

int main()
{
    double *precioOriginal = new double;
    int clave;
    double precioFinal;

    cout << "Ingresa el precio original del artículo: ";
    cin >> *precioOriginal;

    cout << "Ingresa la clave del artículo (1 o 2): ";
    cin >> clave;

    calcularDescuento(precioOriginal, clave, precioFinal);

    cout << "El precio final del artículo es: " << precioFinal << endl;

    delete precioOriginal;

    return 0;
}
