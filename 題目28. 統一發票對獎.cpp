#include <bits/stdc++.h>
using namespace std;

int main(void){
    string num[4];
    int N, i, j, k;
    cin >> num[0] >> num[1] >> num[2] >> num[3];
    cin >> N;
    string my[N];
    long int price[7];
    memset(price, 0, sizeof(price));
    for(i = 0; i < N; i++)
        cin >> my[i];
    long int tot = 0;
    for(i = 0; i < N; i++){
        if(my[i] == num[0]){
            price[0]++;
            tot += 2000000;
        }
        else if(my[i] != num[0]){
            for(j = 1; j < 4; j++){
                if(my[i] == num[j]){
                    price[1]++;
                    tot += 200000;
                }
                else if(num[j].substr(1, 7)== my[i].substr(1, 7)){
                    price[2]++;
                    tot += 40000;
                }
                else if(num[j].substr(2, 7) == my[i].substr(2, 7)){
                    price[3]++;
                    tot += 10000;
                }
                else if(num[j].substr(3, 7) == my[i].substr(3, 7)){
                    price[4]++;
                    tot += 4000;
                }
                else if(num[j].substr(4, 7) == my[i].substr(4, 7)){
                    price[5]++;
                    tot += 1000;
                }
                else if(num[j].substr(5, 7) == my[i].substr(5, 7)){
                    price[6]++;
                    tot += 200;
                }
            }
        }
    }
    for(i = 0; i < 7; i++)
        cout << price[i] << " ";
    cout << endl;
    cout << tot << endl;

    return 0;
}
