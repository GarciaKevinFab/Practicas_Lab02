#include <iostream>
using namespace std;

bool responderPregunta(string *respuesta)
{
    return *respuesta == "Si" || *respuesta == "si";
}

int main()
{
    string *respuesta = new string;

    cout << "Pregunta 1: ¿Colón descubrió América? ";
    cin >> *respuesta;
    if (!responderPregunta(respuesta))
    {
        cout << "Respuesta incorrecta. Fin del juego." << endl;
        delete respuesta;
        return 0;
    }

    cout << "Pregunta 2: ¿La independencia de México fue en el año 1810? ";
    cin >> *respuesta;
    if (!responderPregunta(respuesta))
    {
        cout << "Respuesta incorrecta. Fin del juego." << endl;
        delete respuesta;
        return 0;
    }

    cout << "Pregunta 3: ¿'La Chismosa' es cantada por campesinos de Bambamarca? ";
    cin >> *respuesta;
    if (!responderPregunta(respuesta))
    {
        cout << "Respuesta incorrecta. Fin del juego." << endl;
        delete respuesta;
        return 0;
    }

    cout << "¡Ganaste el juego!" << endl;

    delete respuesta;

    return 0;
}
