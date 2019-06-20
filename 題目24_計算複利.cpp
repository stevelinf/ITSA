#include<bits/stdc++.h>
using namespace std;

int main(void){
    int i, n, p;
    double r, ans = 0;
    cin >> r;
    cin >> n >> p;
    for(i = 0; i < n; i++){
        ans += p;
        ans += ans * r;
    }
    cout << ans << endl;

    return 0;
}

