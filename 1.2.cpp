#include <iostream>
using namespace std;

void calcularInteres(double *inversion, double tasa, double &interes)
{
    interes = (*inversion) * tasa;
}

int main()
{
    double *inversion = new double;
    double tasa = 0.05;
    double interes;

    cout << "Ingresa la cantidad de inversión: ";
    cin >> *inversion;

    calcularInteres(inversion, tasa, interes);

    if (interes > 7000)
    {
        *inversion += interes;
    }

    cout << "El dinero total en la cuenta es: " << *inversion << endl;

    delete inversion;

    return 0;
}
