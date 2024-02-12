#include <iostream>

using namespace std;

int main()
{
    int cantidad;
    cout << "Ingresa el cantidad de frutas para la canasta: ";
    cin >> cantidad;
    string frutas[cantidad];

    cout << "Ingrese los nombres de las frutas:" << endl;
    for (int i = 0; i < cantidad; i++)
    {
        cout << "- ";
        cin >> frutas[i];
    }
    cout << "----" << endl;
    cout << "Las frutas que se encuentran en la canasta son:" << endl;
    for (int j = 0; j < cantidad; j++)
    {
        cout << "- " << frutas[j] << endl;
    }
    return 0;
}