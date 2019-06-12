#include<bits/stdc++.h>
using namespace std;

int main(void){
    double weight, a, b;
    cin >> a >> b;
    while(1){
        if(b == 1){
            weight = (a - 80) * 0.7;
            cout << fixed << setprecision(1) << weight << endl;
        }
        else{
            weight = (a - 70) * 0.6;
            cout << fixed << setprecision(1) << weight << endl;
        }
        cin >> a >> b;
    }

    return 0;
}
