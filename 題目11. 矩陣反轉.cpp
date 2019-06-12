#include <bits/stdc++.h>
using namespace std;

int main(void){
    int i, j, col, row;
    cin >> row;
    cin >> col;
    int array[row][col];
    for(i = 0; i < row; i++)
        for(j = 0; j < col; j++)
            cin >> array[i][j];
    for(i = 0; i < col; i++){
        for(j = 0; j < row; j++)
            cout << array[i][j] << " ";
        cout << endl;
    }
    return 0;
}
