#include <iostream>
using namespace std;

void calcularPrecioLlantas(int *cantidadLlantas, double &totalPagar)
{
    if (*cantidadLlantas < 5)
    {
        totalPagar = (*cantidadLlantas) * 300;
    }
    else if (*cantidadLlantas >= 5 && *cantidadLlantas <= 10)
    {
        totalPagar = (*cantidadLlantas) * 250;
    }
    else
    {
        totalPagar = (*cantidadLlantas) * 200;
    }
}

int main()
{
    int *cantidadLlantas = new int;
    double totalPagar;

    cout << "Ingresa la cantidad de llantas: ";
    cin >> *cantidadLlantas;

    calcularPrecioLlantas(cantidadLlantas, totalPagar);

    cout << "El total a pagar por las llantas es: " << totalPagar << endl;

    delete cantidadLlantas;

    return 0;
}
