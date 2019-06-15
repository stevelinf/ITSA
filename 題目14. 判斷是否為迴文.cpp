#include <bits/stdc++.h>
using namespace std;

int main(void){
    int len, i, flag;
    char s[1000];
    while(cin >> s){
        flag = 1;
        len = strlen(s);
        for(i = 0; i < len / 2; i++)
            if(s[i] != s[len - 1 - i]){
                flag = 0;
                cout << "NO" << endl;
                break;
            }
        if(flag)
            cout << "YES" << endl;
    }
    return 0;
}

/**FAIL**/
/**
int main(void){
    char number[1000];
    int i, length, flag;
    char tmp;
    while(cin >> tmp){
        i = 0;
        length = 0;
        flag = 1;
        memset(number, 0, sizeof(number));
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
    }

    return 0;
}
**/
