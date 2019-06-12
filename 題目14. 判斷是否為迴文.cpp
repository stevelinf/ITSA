#include <bits/stdc++.h>
using namespace std;

int main(void){
    char number[1000];
    int i = 0, length = 0, flag = 1;
    char tmp;
    memset(number, 0, sizeof(number));
    cin >> tmp;
    while(tmp != '\n'){
        length++;
        number[i++] = tmp;
        cin >> tmp;
    }
    for(i = 0; i < length; i++){
        if(number[i] != number[length - 1 - i]){
            cout << "NO" << endl;
            flag = 0;
            break;
        }
    }
    if(flag == 1)
        cout << "YES" << endl;

    return 0;
}
