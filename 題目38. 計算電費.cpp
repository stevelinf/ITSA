#include<bits/stdc++.h>
using namespace std;

int main(void){
    double degree, price_non = 0, price_summer = 0;
    cin >> degree;
    if(degree <= 120){
        price_summer += degree * 2.10;
        price_non += degree * 2.10;
    }
    else if(degree >= 121 && degree <= 330){
        price_summer = 120 * 2.10 + 3.02 * (degree - 120);
        price_non = 120 * 2.10 + 2.68 * (degree - 120);
    }

    else if(degree >= 331 && degree <= 500){
        price_summer = 120 * 2.10 + 3.02 * 210 + 4.39 * (degree - 330);
        price_non = 120 * 2.10 + 2.68 * 210 + 3.61 * (degree - 330);
    }
    else if(degree >= 501 && degree <= 700){
        price_summer = 120 * 2.10 + 3.02 * 210 + 4.39 * 170 + 4.97 * (degree - 500);
        price_non = 120 * 2.10 + 2.68 * 210 + 3.61 * 170 + 4.01 * (degree - 500);
    }
    else if(degree >=  701){
        price_summer = 120 * 2.10 + 3.02 * 210 + 4.39 * 170 + 4.97 * 200 + 5.63 * (degree - 700);
        price_non = 120 * 2.10 + 2.68 * 210 + 3.61 * 170 + 4.01 * 200 + 4.50 * (degree - 700);
    }

    cout << "Summer months:" << price_summer << endl;
    cout << "Non-Summer months:" << price_non << endl;

    return 0;
}
