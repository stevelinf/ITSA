#include <bits/stdc++.h>
using namespace std;

int main(void){
    int mile;
    double kilometer;
    while( cin >> mile){
        kilometer = (double)(mile * 1.6);
        cout << fixed << setprecision(1) << kilometer << endl;
    }

    return 0;
}
