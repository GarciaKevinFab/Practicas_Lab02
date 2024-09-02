#include <iostream>
using namespace std;

void calcularDescuento(double *montoCompra, string *colorBolita, double &totalPagar)
{
    if (*colorBolita == "blanco")
    {
        totalPagar = *montoCompra; // No hay descuento
    }
    else if (*colorBolita == "verde")
    {
        totalPagar = *montoCompra * 0.90; // 10% de descuento
    }
    else if (*colorBolita == "amarillo")
    {
        totalPagar = *montoCompra * 0.75; // 25% de descuento
    }
    else if (*colorBolita == "azul")
    {
        totalPagar = *montoCompra * 0.50; // 50% de descuento
    }
    else if (*colorBolita == "rojo")
    {
        totalPagar = 0; // 100% de descuento
    }
    else
    {
        totalPagar = *montoCompra; // Si no se introduce un color válido
    }
}

int main()
{
    double *montoCompra = new double;
    string *colorBolita = new string;
    double totalPagar;

    cout << "Ingresa el monto de la compra: ";
    cin >> *montoCompra;
    cout << "Ingresa el color de la bolita (blanco, verde, amarillo, azul, rojo): ";
    cin >> *colorBolita;

    calcularDescuento(montoCompra, colorBolita, totalPagar);

    cout << "El total a pagar es: " << totalPagar << endl;

    delete montoCompra;
    delete colorBolita;

    return 0;
}
