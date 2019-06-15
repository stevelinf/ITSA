#include<iostream>
using namespace std;

int main(void){
    int num, i, ans;
    while(cin >> num){
        ans = 0;
        for(i = 1; i <= num; i++){
            if(i % 3 == 0)
                ans += i;
        }
            cout << ans <<endl;
    }

    return 0;
}
