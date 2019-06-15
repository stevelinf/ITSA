#include<iostream>
using namespace std;

int main(void){
    int num, i, flag;
    while(cin >> num){
        flag = 0;
        for(i = 2; i < num; i++){
            if(num % i == 0){
                cout << "NO" << endl;
                flag = 1;
                break;
            }
        }
        if(!flag)
            cout << "YES" << endl;
    }

    return 0;
}
