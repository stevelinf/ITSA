#include <bits/stdc++.h>
using namespace std;

int main(void){
    int x, y;
    while(cin >> x >> y){
        if(x * x + y * y <= 10000)
            cout << "inside" << endl;
        else
            cout << "outside" << endl;
    }

    return 0;
}
