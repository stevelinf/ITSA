#include<bits/stdc++.h>
using namespace std;

int main(void){
    int i, j, dice[4];
    for(i = 0; i < 4; i++)
        cin >> dice[i];
        int count[6];
        memset(count, 0, sizeof(count));
        for(i = 0; i < 4; i++)
            count[dice[i] - 1]++;
        int num[5];
        memset(num, 0, sizeof(num));
        for(i = 0; i < 6; i++){
            num[count[i]]++;
        }
        if(num[4] == 1)
            cout << "WIN" << endl;
        else if(num[3] == 1)
            cout << "R" << endl;
        else if(num[1] == 4){
            cout << "R" << endl;
        }
        else if(num[2] == 1){
            int sum = 0;
            for(i = 0; i < 6; i++)
                if(count[i] == 1)
                    sum += (i + 1);
            cout << sum << endl;
        }
        else if(num[2] == 2){
            int max = -1;
            for(i = 0; i < 6; i++){
                if(count[i] == 2)
                    if(i + 1 > max)
                        max = i + 1;
            }
            cout << max * 2 << endl;
        }

    return 0;
}
