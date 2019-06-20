#include<iostream>
#include<string.h>
using namespace std;

int main(void){
    int i, j, n, ans, b[100];
    char a[11];
    ans = 0;
    for(i = 0; i < 10; i++)
        cin >> a[i];

    /**The following is the first time to calculate the accumulating value of the ISBN.**/
    for(i = 0; i < 10; i++){
        if(a[i] == 'X')
            ans += 10;
        else
            ans += a[i] - '0';
        b[i] = ans;
    }

    ans=0;
    /**The following is the second time to calculate the accumulating value of the ISBN.**/
    for(i = 0; i < 10; i++)
        ans += b[i];

    if(ans % 11 == 0)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}

