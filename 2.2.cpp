#include <iostream>
using namespace std;

void calcularUtilidad(double *salarioMensual, int *antiguedad, double &utilidad)
{
    if (*antiguedad < 1)
    {
        utilidad = *salarioMensual * 0.05; // Menos de 1 año
    }
    else if (*antiguedad < 2)
    {
        utilidad = *salarioMensual * 0.07; // Entre 1 y 2 años
    }
    else if (*antiguedad < 5)
    {
        utilidad = *salarioMensual * 0.10; // Entre 2 y 5 años
    }
    else if (*antiguedad < 10)
    {
        utilidad = *salarioMensual * 0.15; // Entre 5 y 10 años
    }
    else
    {
        utilidad = *salarioMensual * 0.20; // Más de 10 años
    }
}

int main()
{
    double *salarioMensual = new double;
    int *antiguedad = new int;
    double utilidad;

    cout << "Ingresa el salario mensual: ";
    cin >> *salarioMensual;
    cout << "Ingresa la antigüedad en años: ";
    cin >> *antiguedad;

    calcularUtilidad(salarioMensual, antiguedad, utilidad);

    cout << "La utilidad anual del trabajador es: " << utilidad << endl;

    delete salarioMensual;
    delete antiguedad;

    return 0;
}
