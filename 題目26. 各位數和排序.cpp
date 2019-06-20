#include<bits/stdc++.h>
using namespace std;

int main(void){
    int i, j, n, a[100], tmp[100], num;
    while(1){
        memset(tmp, 0, sizeof(tmp));
    cin >> n;
    for(i = 0; i < n; i++){
        cin >> a[i];
        num = a[i];
        while(num != 0){
            tmp[i] += num % 10;
            num = num / 10;
        }
    }

    for(i = 0; i < n - 1; i++)
        for(j = i + 1; j < n; j++){
            if(tmp[i] > tmp[j]){
                swap(a[i], a[j]);
                swap(tmp[i], tmp[j]);
            }
            if(tmp[i] == tmp[j] && a[i] > a[j]){
                swap(a[i], a[j]);
                swap(tmp[i], tmp[j]);
            }
        }

    for(i = 0; i < n; i++)
        cout << a[i] <<" ";
    cout << endl;
    }

    return 0;
}

