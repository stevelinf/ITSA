#include <bits/stdc++.h>
using namespace std;

int main(void){
    int i, j, a = 0, b = 0, flag = 0, check = 0, count = 0, temp;
    int an, gu, ans[4], gue[4], whether_an[10], whether_gu[10], digit_an[10], digit_gu[10], store[1000][4];

    while(1){
        for(i = 0; i < 1000; i++)
            for(j = 0; j < 4; j++)
                store[i][j] = 0;

        for(i = 0; i < 10; i++){
            whether_an[i] = 0;
            digit_an[i] = 0;
        }
        cin >> an;

        i = 0;
        for(i = 0; i < 4; i++){
            ans[i] = an % 10;
            an /= 10;
        }
        if(ans[0] == ans[1] && ans[1] == ans[2] && ans[2] == ans[3] && ans[3] == 0)
            break;

        for(i = 0; i < 10; i++)
            for(j = 0; j < 4; j++)
                if(i == ans[j]){
                    whether_an[i] = 1;
                    digit_an[i] = j;
                }


        do{
            for(i = 0; i < 10; i++){
                whether_gu[i] = 0;
                digit_gu[i] = 0;
            }
            cin >> gu;
            temp = gu;
            i = 0;
            for(i = 0; i < 4; i++){
                gue[i] = gu % 10;
                gu /= 10;
            }
            for(i = 0; i < 4; i++)
                store[count][i] = gue[i];
            count++;
            for(i = 0; i < 4 - 1; i++){
                for(j = i + 1; j < 4; j++)
                    if(gue[i] == gue[j]){
                        check = 1;
                        /*if(gue[3] == 0)
                            cout << "0";*/
                        //printf("%d is an invalid guess.\n", temp);
                        break;
                    }
                if(check == 1)
                    break;
            }

            for(i = 0; i < count - 1; i++){
                if(gue[0] == store[i][0] && gue[1] == store[i][1] && gue[2] == store[i][2] && gue[3] == store[i][3]){
                    check = 1;
                    /*if(gue[3] == 0)
                        printf("0");*/
                    //printf("%d is already guessed.\n", temp);
                    break;
                }
            }
            if(check == 0){
                for(i = 0; i < 10; i++){
                for(j = 0; j < 4; j++){
                    if(i == gue[j]){
                        whether_gu[i] = 1;
                        digit_gu[i] = j;
                    }
                }
            }

            for(i = 0; i < 10; i++){
                if(whether_gu[i] == 1 && whether_an[i] == 1){
                    b++;
                    if(digit_gu[i] == digit_an[i]){
                        a++;
                        b--;
                    }
                }
            }

            cout << a << "A" << b << "B" << endl;

            if(a == 4)
                flag = 1;

            a = 0, b = 0;
}
           check = 0;
        }while(flag == 0);

        flag = 0;
    }

    return 0;
}
