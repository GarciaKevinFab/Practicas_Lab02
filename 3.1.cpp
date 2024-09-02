#include <iostream>
using namespace std;

void obtenerDiaSemana(int *dia, string &nombreDia)
{
    switch (*dia)
    {
    case 1:
        nombreDia = "Lunes";
        break;
    case 2:
        nombreDia = "Martes";
        break;
    case 3:
        nombreDia = "Miércoles";
        break;
    case 4:
        nombreDia = "Jueves";
        break;
    case 5:
        nombreDia = "Viernes";
        break;
    case 6:
        nombreDia = "Sábado";
        break;
    case 7:
        nombreDia = "Domingo";
        break;
    default:
        nombreDia = "Número inválido";
    }
}

int main()
{
    int *dia = new int;
    string nombreDia;

    cout << "Ingresa un número del 1 al 7 correspondiente al día de la semana: ";
    cin >> *dia;

    obtenerDiaSemana(dia, nombreDia);

    cout << "El día es: " << nombreDia << endl;

    delete dia;

    return 0;
}
