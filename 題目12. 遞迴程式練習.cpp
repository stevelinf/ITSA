#include <bits/stdc++.h>
using namespace std;

int f(int n){
    if(n == 0 || n == 1)
        return (n + 1);
    else
        return (f(n - 1) + f(floor(n / 2)));
}

int main(void){
    int k;
    cin >> k;
    int result = f(k);
    cout << result << endl;

    return 0;
}
