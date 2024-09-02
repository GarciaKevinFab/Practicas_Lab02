#include <iostream>
using namespace std;

void calcularSalario(int *horasTrabajadas, double &salario)
{
    if (*horasTrabajadas <= 40)
    {
        salario = (*horasTrabajadas) * 16;
    }
    else
    {
        int horasExtras = *horasTrabajadas - 40;
        salario = (40 * 16) + (horasExtras * 20);
    }
}

int main()
{
    int *horas = new int;
    double salario;

    cout << "Ingresa el número de horas trabajadas: ";
    cin >> *horas;

    calcularSalario(horas, salario);

    cout << "El salario semanal es: " << salario << endl;

    delete horas;

    return 0;
}
