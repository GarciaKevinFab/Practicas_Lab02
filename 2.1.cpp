#include <iostream>
using namespace std;

void calcularHorasExtras(int *horasTrabajadas, double &pagoHorasExtras)
{
    int horasExtras = 0;
    pagoHorasExtras = 0;

    if (*horasTrabajadas > 40)
    {
        horasExtras = *horasTrabajadas - 40;
        if (horasExtras <= 8)
        {
            pagoHorasExtras = horasExtras * 2 * 16; // Se pagan al doble
        }
        else
        {
            pagoHorasExtras = (8 * 2 * 16) + ((horasExtras - 8) * 3 * 16); // Las primeras 8 al doble, el resto al triple
        }
    }
}

int main()
{
    int *horasTrabajadas = new int;
    double pagoHorasExtras;

    cout << "Ingresa las horas trabajadas: ";
    cin >> *horasTrabajadas;

    calcularHorasExtras(horasTrabajadas, pagoHorasExtras);

    if (pagoHorasExtras > 0)
    {
        cout << "El pago por horas extras es: " << pagoHorasExtras << endl;
    }
    else
    {
        cout << "No se realizaron horas extras." << endl;
    }

    delete horasTrabajadas;

    return 0;
}
