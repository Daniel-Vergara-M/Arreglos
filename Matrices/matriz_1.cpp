#include <iostream>

using namespace std;

int main()
{
    const int row = 5;
    const int column = 3;
    string calc[row][column] = {
        {"1", "2", "3"}, 
        {"4", "5", "6"}, 
        {"7", "8", "9"}, 
        {"+", "0", "-"}, 
        {"*", "=", "√"}};
    
    for (int i = 0; i < row; i ++) {
        for (int j = 0; j < column; j++) {
            cout << calc[i][j] << " ";
        }
        cout<<endl;
    }

    return 0;
}