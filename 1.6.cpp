#include <iostream>
using namespace std;

void calcularCalorias(int *minutos, double &caloriasDormido, double &caloriasSentado)
{
    caloriasDormido = (*minutos) * 1.08;
    caloriasSentado = (*minutos) * 1.66;
}

int main()
{
    int *minutos = new int;
    double caloriasDormido, caloriasSentado;

    cout << "Ingresa el tiempo en minutos: ";
    cin >> *minutos;

    calcularCalorias(minutos, caloriasDormido, caloriasSentado);

    cout << "Calorías consumidas durmiendo: " << caloriasDormido << endl;
    cout << "Calorías consumidas sentado: " << caloriasSentado << endl;

    delete minutos;

    return 0;
}
