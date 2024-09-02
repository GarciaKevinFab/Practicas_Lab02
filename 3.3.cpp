#include <iostream>
using namespace std;

void verificarVocal(char *caracter, bool &esVocal)
{
    switch (*caracter)
    {
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
        esVocal = true;
        break;
    default:
        esVocal = false;
    }
}

int main()
{
    char *caracter = new char;
    bool esVocal;

    cout << "Ingresa un carácter: ";
    cin >> *caracter;

    verificarVocal(caracter, esVocal);

    if (esVocal)
    {
        cout << "Es una vocal." << endl;
    }
    else
    {
        cout << "No es una vocal." << endl;
    }

    delete caracter;

    return 0;
}
