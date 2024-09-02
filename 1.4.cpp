#include <iostream>
using namespace std;

void aplicarDescuento(double* montoCompra, double& totalPagar) {
    if (*montoCompra > 1000) {
        totalPagar = *montoCompra * 0.80;  // Aplicar 20% de descuento
    } else {
        totalPagar = *montoCompra;
    }
}

int main() {
    double* montoCompra = new double;
    double totalPagar;

    cout << "Ingresa el monto de la compra: ";
    cin >> *montoCompra;

    aplicarDescuento(montoCompra, totalPagar);

    cout << "El total a pagar es: " << totalPagar << endl;

    delete montoCompra;

    return 0;
}
