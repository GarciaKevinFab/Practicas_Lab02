#include <iostream>
using namespace std;

void calcularPromedio(double *nota1, double *nota2, double *nota3, double &promedio)
{
    promedio = (*nota1 + *nota2 + *nota3) / 3;
}

int main()
{
    double *nota1 = new double;
    double *nota2 = new double;
    double *nota3 = new double;
    double promedio;

    cout << "Ingresa la primera nota: ";
    cin >> *nota1;
    cout << "Ingresa la segunda nota: ";
    cin >> *nota2;
    cout << "Ingresa la tercera nota: ";
    cin >> *nota3;

    calcularPromedio(nota1, nota2, nota3, promedio);

    if (promedio >= 14)
    {
        cout << "El alumno aprueba con un promedio de " << promedio << endl;
    }
    else
    {
        cout << "El alumno reprueba con un promedio de " << promedio << endl;
    }

    delete nota1;
    delete nota2;
    delete nota3;

    return 0;
}
