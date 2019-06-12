#include<bits/stdc++.h>
using namespace std;

int main(void){
    int N, a1, a2, a3;
    cin >> N;
    cin >> a1;
    cin >> a2;
    cin >> a3;
    int left = N - a1 * 15 - a2 * 20 - a3 * 30;
    int fifty = 0, five = 0, one = 0;
    if(left < 0)
        cout << "0" << endl;
    else{
        while(left >= 50){
            fifty++;
            left -= 50;
        }
        while(left >= 5){
            five++;
            left -= 5;
        }
        one = left;
    }
    cout << one << "," << five << "," << fifty << endl;

    return 0;
}
