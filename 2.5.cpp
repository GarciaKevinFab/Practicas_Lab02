#include <iostream>
using namespace std;

void calcularTotalCompra(int *cantidadComputadoras, double &totalPagar)
{
    double precioPorComputadora = 11000;

    if (*cantidadComputadoras < 5)
    {
        totalPagar = (*cantidadComputadoras) * precioPorComputadora * 0.90; // 10% de descuento
    }
    else if (*cantidadComputadoras >= 5 && *cantidadComputadoras < 10)
    {
        totalPagar = (*cantidadComputadoras) * precioPorComputadora * 0.80; // 20% de descuento
    }
    else
    {
        totalPagar = (*cantidadComputadoras) * precioPorComputadora * 0.60; // 40% de descuento
    }
}

int main()
{
    int *cantidadComputadoras = new int;
    double totalPagar;

    cout << "Ingresa la cantidad de computadoras: ";
    cin >> *cantidadComputadoras;

    calcularTotalCompra(cantidadComputadoras, totalPagar);

    cout << "El total a pagar es: " << totalPagar << endl;

    delete cantidadComputadoras;

    return 0;
}
