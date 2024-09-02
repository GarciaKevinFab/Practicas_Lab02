#include <iostream>
using namespace std;

void calcularCostoLlamada(int *claveZona, int *duracion, double &costoTotal)
{
    double costoPorMinuto;

    switch (*claveZona)
    {
    case 1:
        costoPorMinuto = 0.13;
        break;
    case 2:
        costoPorMinuto = 0.11;
        break;
    case 5:
        costoPorMinuto = 0.22;
        break;
    case 6:
        costoPorMinuto = 0.19;
        break;
    case 7:
        costoPorMinuto = 0.17;
        break;
    case 9:
        costoPorMinuto = 0.17;
        break;
    case 10:
        costoPorMinuto = 0.20;
        break;
    case 15:
        costoPorMinuto = 0.39;
        break;
    case 20:
        costoPorMinuto = 0.28;
        break;
    default:
        cout << "Clave de zona inválida." << endl;
        return;
    }

    costoTotal = costoPorMinuto * (*duracion);
}

int main()
{
    int *claveZona = new int;
    int *duracion = new int;
    double costoTotal;

    cout << "Ingresa la clave de la zona: ";
    cin >> *claveZona;
    cout << "Ingresa la duración de la llamada en minutos: ";
    cin >> *duracion;

    calcularCostoLlamada(claveZona, duracion, costoTotal);

    cout << "El costo total de la llamada es: " << costoTotal << endl;

    delete claveZona;
    delete duracion;

    return 0;
}
