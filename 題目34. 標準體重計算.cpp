#include<bits/stdc++.h>
using namespace std;

int main(void){
    double weight, a, b;
    while(scanf("%lf%lf", &a, &b) != EOF){
        if(b == 1){
            weight = (a - 80) * 0.7;
            printf("%.1f\n", weight);
        }
        else{
            weight = (a - 70) * 0.6;
            printf("%.1f\n", weight);
        }
    }

    return 0;
}
