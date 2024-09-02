#include <iostream>
using namespace std;

void calcularPago(double *montoCompra, double &inversionPropia, double &prestamoBanco, double &creditoFabricante)
{
    if (*montoCompra > 500000)
    {
        inversionPropia = *montoCompra * 0.55;
        prestamoBanco = *montoCompra * 0.30;
        creditoFabricante = *montoCompra * 0.15;
    }
    else
    {
        inversionPropia = *montoCompra * 0.70;
        creditoFabricante = *montoCompra * 0.30;
        prestamoBanco = 0;
    }
}

int main()
{
    double *montoCompra = new double;
    double inversionPropia, prestamoBanco, creditoFabricante;

    cout << "Ingresa el monto total de la compra: ";
    cin >> *montoCompra;

    calcularPago(montoCompra, inversionPropia, prestamoBanco, creditoFabricante);

    cout << "Inversión propia: " << inversionPropia << endl;
    cout << "Préstamo del banco: " << prestamoBanco << endl;
    cout << "Crédito al fabricante: " << creditoFabricante << endl;

    delete montoCompra;

    return 0;
}
