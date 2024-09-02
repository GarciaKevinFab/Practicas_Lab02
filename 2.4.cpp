#include <iostream>
using namespace std;

void clasificarJubilacion(int *edad, int *antiguedad, string &tipoJubilacion)
{
    if (*edad >= 60 && *antiguedad < 25)
    {
        tipoJubilacion = "Jubilación por edad";
    }
    else if (*edad < 60 && *antiguedad >= 25)
    {
        tipoJubilacion = "Jubilación por antigüedad joven";
    }
    else if (*edad >= 60 && *antiguedad >= 25)
    {
        tipoJubilacion = "Jubilación por antigüedad adulta";
    }
    else
    {
        tipoJubilacion = "No aplica para jubilación";
    }
}

int main()
{
    int *edad = new int;
    int *antiguedad = new int;
    string tipoJubilacion;

    cout << "Ingresa la edad de la persona: ";
    cin >> *edad;
    cout << "Ingresa la antigüedad en años: ";
    cin >> *antiguedad;

    clasificarJubilacion(edad, antiguedad, tipoJubilacion);

    cout << "La persona está clasificada para: " << tipoJubilacion << endl;

    delete edad;
    delete antiguedad;

    return 0;
}
