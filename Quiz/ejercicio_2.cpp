#include <iostream>

using namespace std;

int main()
{
    int posiciones;
    int minasEnVector = 0;
    cout << "Ingrese la cantidad de posiciones para buscaminas: ";
    cin >> posiciones;
    string vector[posiciones];
    for (int i = 0; i < posiciones; i++)
    {
        cout << "- ";
        cin >> vector[i];
    }

    for (int j = 0; j < posiciones; j++)
    {
        if (vector[j] == "*")
        {
            minasEnVector++;
        }
    }

    cout << "El campo tiene " << minasEnVector << " minas." << endl;

    return 0;
}