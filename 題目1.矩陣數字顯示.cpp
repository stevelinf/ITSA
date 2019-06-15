#include <bits/stdc++.h>
using namespace std;

int main(void){
    int i, num;
    char s[4];
while(cin >> s){
    num = atoi(s);
    int a[4];
    for(i = 3; i >= 0; i--){
        a[i] = num % 10;
        num /= 10;
    }

    /** LAYER 1 **/
    for(i = 0; i < 4; i++){
        switch(a[i]){
            case 0:
                cout << "***** ";
                break;

            case 1:
                cout << "    * ";
                break;

            case 2:
                cout << "***** ";
                break;

            case 3:
                cout << "***** ";
                break;

            case 4:
                cout << "*   * ";
                break;

            case 5:
                cout << "***** ";
                break;

            case 6:
                cout << "***** ";
                break;

            case 7:
                cout << "***** ";
                break;

            case 8:
                cout << "***** ";
                break;

            case 9:
                cout << "***** ";
                break;
        }
    }
    cout << endl;

        /** LAYER 2 **/
    for(i = 0; i < 4; i++){
        switch(a[i]){
            case 0:
                cout << "*   * ";
                break;

            case 1:
                cout << "    * ";
                break;

            case 2:
                cout << "    * ";
                break;

            case 3:
                cout << "    * ";
                break;

            case 4:
                cout << "*   * ";
                break;

            case 5:
                cout << "*     ";
                break;

            case 6:
                cout << "*     ";
                break;

            case 7:
                cout << "    * ";
                break;

            case 8:
                cout << "*   * ";
                break;

            case 9:
                cout << "*   * ";
                break;
        }
    }
    cout << endl;

        /** LAYER 3 **/
    for(i = 0; i < 4; i++){
        switch(a[i]){
            case 0:
                cout << "*   * ";
                break;

            case 1:
                cout << "    * ";
                break;

            case 2:
                cout << "***** ";
                break;

            case 3:
                cout << "***** ";
                break;

            case 4:
                cout << "***** ";
                break;

            case 5:
                cout << "***** ";
                break;

            case 6:
                cout << "***** ";
                break;

            case 7:
                cout << "    * ";
                break;

            case 8:
                cout << "***** ";
                break;

            case 9:
                cout << "***** ";
                break;
        }
    }
    cout << endl;

            /** LAYER 4 **/
    for(i = 0; i < 4; i++){
        switch(a[i]){
            case 0:
                cout << "*   * ";
                break;

            case 1:
                cout << "    * ";
                break;

            case 2:
                cout << "*     ";
                break;

            case 3:
                cout << "    * ";
                break;

            case 4:
                cout << "    * ";
                break;

            case 5:
                cout << "    * ";
                break;

            case 6:
                cout << "*   * ";
                break;

            case 7:
                cout << "    * ";
                break;

            case 8:
                cout << "*   * ";
                break;

            case 9:
                cout << "    * ";
                break;
        }
    }
    cout << endl;
            /** LAYER 5 **/
    for(i = 0; i < 4; i++){
        switch(a[i]){
            case 0:
                cout << "***** ";
                break;

            case 1:
                cout << "    * ";
                break;

            case 2:
                cout << "***** ";
                break;

            case 3:
                cout << "***** ";
                break;

            case 4:
                cout << "    * ";
                break;

            case 5:
                cout << "***** ";
                break;

            case 6:
                cout << "***** ";
                break;

            case 7:
                cout << "    * ";
                break;

            case 8:
                cout << "***** ";
                break;

            case 9:
                cout << "    * ";
                break;
        }
    }
    cout << endl;
}
    return 0;
}
