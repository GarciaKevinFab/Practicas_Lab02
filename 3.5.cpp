#include <iostream>
#include <cstdlib>
using namespace std;

void realizarOperacion(char *operacion, int *num1, int *num2,
                       int &resultado)
{
    switch (*operacion)
    {
    case 'S':
    case 's':
        resultado = *num1 + *num2;
        break;
    case 'R':
    case 'r':
        resultado = *num1 - *num2;
        break;
    case 'P':
    case 'p':
    case 'M':
    case 'm':
        resultado = (*num1) * (*num2);
        break;
    case 'D':
    case 'd':
        if (*num2 != 0)
            resultado = (*num1) / (*num2);
        else
            cout << "Error: División entre cero." << endl;
        break;
    default:
        cout << "Operación no válida." << endl;
    }
}

int main(int argc, char *argv[])
{
    if (argc != 4)
    {
        cout << "Uso: [Operación] [Número 1] [Número 2]" << endl;
        return 1;
    }

    char *operacion = new char(argv[1][0]);
    int *num1 = new int(atoi(argv[2]));
    int *num2 = new int(atoi(argv[3]));
    int resultado;

    realizarOperacion(operacion, num1, num2, resultado);

    cout << "Resultado: " << resultado << endl;

    delete operacion;
    delete num1;
    delete num2;

    return 0;
}
