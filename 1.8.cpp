#include <iostream>
using namespace std;

void calcularTotalCamisas(int *cantidadCamisas, double *precioUnitario, double &totalPagar)
{
    if (*cantidadCamisas >= 3)
    {
        totalPagar = (*cantidadCamisas) * (*precioUnitario) * 0.80; // 20% de descuento
    }
    else
    {
        totalPagar = (*cantidadCamisas) * (*precioUnitario) * 0.90; // 10% de descuento
    }
}

int main()
{
    int *cantidadCamisas = new int;
    double *precioUnitario = new double;
    double totalPagar;

    cout << "Ingresa la cantidad de camisas: ";
    cin >> *cantidadCamisas;

    cout << "Ingresa el precio unitario de las camisas: ";
    cin >> *precioUnitario;

    calcularTotalCamisas(cantidadCamisas, precioUnitario, totalPagar);

    cout << "El total a pagar es: " << totalPagar << endl;

    delete cantidadCamisas;
    delete precioUnitario;

    return 0;
}
