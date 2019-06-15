#include <bits/stdc++.h>
using namespace std;

int main(void){
    int i, j, col, row;
    while(cin >> row >> col){
        int array[row][col];
    for(i = 0; i < row; i++)
        for(j = 0; j < col; j++)
            cin >> array[i][j];
    for(j = 0; j < col; j++){
        for(i = 0; i < row; i++)
            cout << array[i][j] << " ";
        cout << endl;
    }
    }

    return 0;
}
