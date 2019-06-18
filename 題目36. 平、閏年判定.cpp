#include <bits/stdc++.h>
using namespace std;

int main(void){
    int year, flag;
    while(cin >> year){
        flag = 0;
        if(year % 4 == 0){
            flag = 1;
            if(year % 100 == 0){
                flag = 0;
            }
            if(year % 400 == 0){
                flag = 1;
            }
        }
        if(flag == 1)
            cout << "Bissextile Year" << endl;
        else
            cout << "Common Year" << endl;
    }

    return 0;
}
