#include <iostream>

using namespace std;

int main()
{

    int cantidadV1;
    int cantidadV2;
    int sumaV1 = 0;
    int sumaV2 = 0;

    cout << "Ingrese la cantidad de valores para el vector 1: ";
    cin >> cantidadV1;
    cout << "Ingrese la cantidad de valores para el vector 2: ";
    cin >> cantidadV2;

    int vect1[cantidadV1];
    int vect2[cantidadV2];

    cout << "\nVector 1:" << endl;

    for (int i = 0; i < cantidadV1; i++)
    {
        cout << "- ";
        cin >> vect1[i];
        sumaV1 += vect1[i];
    }
    cout << "\nVector 2:" << endl;
    for (int j = 0; j < cantidadV2; j++)
    {
        cout << "- ";
        cin >> vect2[j];
        sumaV2 += vect2[j];
    }

    cout << sumaV1 << " " << sumaV2 << endl;
    /* if (sumaV1 == sumaV2)
    {
        cout << "El resultado de la suma de los valores de cada vector es igual: " << sumaV1 << endl;
    }
    else
    {
        cout << "El resultado de la suma de los valores de cada vector es diferente: " << sumaV1 << " y " << sumaV2 << endl;
    } */

    return 0;
}