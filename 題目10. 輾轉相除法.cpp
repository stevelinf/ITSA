#include<iostream>
using namespace std;

int gcd(int t,int v){
    if(t % v == 0)
        return v;
    else
        return gcd(v, t % v);
}

int main(void){
    int a, b;
    while(cin >> a >> b){
        int tmp, t1, t2;
        t1 = a;
        t2 = b;
        if(b > a)
            swap(a,b);
        cout << gcd(a,b) << endl;
    }
    return 0;
}
