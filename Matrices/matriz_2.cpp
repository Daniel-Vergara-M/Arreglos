#include <iostream>

using namespace std;

int main() {

    int row;
    int column;
    string name;
    string price;

    cout << "Ingrese la cantidad de filas: ";
    cin >> row;
    cout << "Ingrese la cantidad de columnas: ";
    cin >> column;

    string maquina[row][column];

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            cout << "Esta es la posición actual: (" << i+1 << ", " << j+1 << ")" << endl;
            cout << "Ingrese el nombre del producto: ";
            cin >> name;
            maquina[i][j] = name;
            cout << "Ingrese el precio del producto: ";
            cin >> price;
            maquina[i][j] = maquina[i][j] + " " + price;
        }
    }

    for (int k = 0; k < row; k++){
        for (int l = 0; l < column; l++) {
            cout << maquina[k][l] << " | ";
        }
        cout << endl;
    }

    return 0;
}