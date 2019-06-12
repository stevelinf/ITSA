#include <bits/stdc++.h>
using namespace std;

int main(void){
    int h1, h2, m1, m2;
    int tot, time1, time2;
    cin >> h1;
    cin >> m1;
    cin >> h2;
    cin >> m2;
    time1 = h1 * 60 + m1;
    time2 = h2 * 60 + m2;
    tot = time2 - time1;
    int price = 0;

    if(tot <= 120){
        if(tot <= 30)
            cout << "30" << endl;
        else if(tot > 30 && tot <= 60)
            cout << "60" << endl;
        else if(tot > 60 && tot <= 90)
            cout << "90" << endl;
        else
            cout << "120" << endl;
    }
    else if(tot > 120 && tot < 240){
        price += 120;
        tot -= 120;

        if(tot <= 30)
            price += 40;
        else if(tot > 30 && tot <= 60)
            price += 80;
        else if(tot > 60 && tot <= 90)
            price += 120;
        else
            price += 160;
        cout << price << endl;
    }
    else{
        price += 120;
        tot -= 120;

        if(tot <= 30)
            price += 40;
        else if(tot > 30 && tot <= 60)
            price += 80;
        else if(tot > 60 && tot <= 90)
            price += 120;
        else
            price += 160;

        tot -= 120;

        while(tot >= 30){
            tot -= 30;
            price += 60;
        }
        cout << price << endl;
    }

    return 0;
}
