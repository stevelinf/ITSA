#include<iostream>
using namespace std;

int main(void){
    int i, n, a1, b1, a2, b2;
    char tmp[2] = {0};
    while(cin >> n){
        for (i = 0; i < n; i++){
            cin >> tmp;
            cin >> a1 >> b1 >> a2 >> b2;
            if(tmp[0] == '+')
                cout << a1 + a2 << " " << b1 + b2 << endl;
            else if(tmp[0]=='-')
                cout << a1 - a2 << " " << b1 - b2 << endl;
            else
                cout << a1 * a2 - b1 * b2 << " " << a1 * b2 + a2 * b1 << endl;
            tmp[0]='\0';
        }
    }
    return 0;
}
