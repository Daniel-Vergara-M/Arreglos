#include <iostream>

using namespace std;

int main() {
    string tablero[3][3];

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << "(" << i+1 << ", " << j+1 << ") Ingrese el valor: ";
            cin >> tablero[i][j];
        }
    }

    
    for (int k = 0; k < 3; k++){
        for (int l = 0; l < 3; l++) {
            cout << tablero[k][l] << " | ";
        }
        cout << endl;
    }

    return 0;
}