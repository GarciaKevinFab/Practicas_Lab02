#include <iostream>
using namespace std;

void obtenerNombreMes(int *mes, string &nombreMes)
{
    switch (*mes)
    {
    case 1:
        nombreMes = "Enero";
        break;
    case 2:
        nombreMes = "Febrero";
        break;
    case 3:
        nombreMes = "Marzo";
        break;
    case 4:
        nombreMes = "Abril";
        break;
    case 5:
        nombreMes = "Mayo";
        break;
    case 6:
        nombreMes = "Junio";
        break;
    case 7:
        nombreMes = "Julio";
        break;
    case 8:
        nombreMes = "Agosto";
        break;
    case 9:
        nombreMes = "Septiembre";
        break;
    case 10:
        nombreMes = "Octubre";
        break;
    case 11:
        nombreMes = "Noviembre";
        break;
    case 12:
        nombreMes = "Diciembre";
        break;
    default:
        nombreMes = "Número inválido";
    }
}

int main()
{
    int *mes = new int;
    string nombreMes;

    cout << "Ingresa un número del 1 al 12 correspondiente al mes: ";
    cin >> *mes;

    obtenerNombreMes(mes, nombreMes);

    cout << "El mes es: " << nombreMes << endl;

    delete mes;

    return 0;
}
