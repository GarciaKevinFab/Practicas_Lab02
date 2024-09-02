#include <iostream>
using namespace std;

void ordenarNumeros(int* a, int* b) {
    if (*a < *b) {
        int temp = *a;
        *a = *b;
        *b = temp;
    }
}

int main() {
    int* num1 = new int;
    int* num2 = new int;

    do {
        cout << "Ingresa el primer número positivo: ";
        cin >> *num1;
    } while (*num1 <= 0);

    do {
        cout << "Ingresa el segundo número positivo: ";
        cin >> *num2;
    } while (*num2 <= 0);

    ordenarNumeros(num1, num2);

    cout << "Números en orden descendente: " << *num1 << " y " << *num2 << endl;

    delete num1;
    delete num2;

    return 0;
}
