#include <iostream>
using namespace std;

void obtenerSignoZodiaco(int *signo, string &categoria)
{
    switch (*signo)
    {
    case 1:
    case 5:
    case 9:
        categoria = "Fuego";
        break;
    case 2:
    case 6:
    case 10:
        categoria = "Tierra";
        break;
    case 3:
    case 7:
    case 11:
        categoria = "Aire";
        break;
    case 4:
    case 8:
    case 12:
        categoria = "Agua";
        break;
    default:
        categoria = "Número inválido";
    }
}

int main()
{
    int *signo = new int;
    string categoria;

    cout << "Ingresa un número del 1 al 12 correspondiente al signo del zodíaco: ";
    cin >> *signo;

    obtenerSignoZodiaco(signo, categoria);

    cout << "El signo del zodíaco pertenece a la categoría: " << categoria << endl;

    delete signo;

    return 0;
}
