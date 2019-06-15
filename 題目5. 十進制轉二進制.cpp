#include <bits/stdc++.h>
using namespace std;

int main(void){
    int a, i;
    char s[9] = {0, 0, 0, 0, 0, 0, 0, 0};
    while(cin >> a){
        if(a < 0)
            a += 256;
        for(i = 0; i < 8; i++)
            s[i]= '0';
        int tmp = 7;
        while(a != 0){
            if(a & 1){
                s[tmp--] = '1';
                a = a >> 1;
            }
            else{
                s[tmp--] = '0';
                a = a >> 1;
            }
        }
        cout << s << endl;
    }
    return 0;
}
