#include <stdio.h>

int main(void){
    int h1, h2, m1, m2;
    int tot, time1, time2;
    scanf("%d %d", &h1, &m1);
    scanf("%d %d", &h2, &m2);
    time1 = h1 * 60 + m1;
    time2 = h2 * 60 + m2;
    tot = time2 - time1;
    int price = 0;

    if(tot <= 120){
        if(tot <= 30)
            printf("30\n");
        else if(tot > 30 && tot <= 60)
            printf("60\n");
        else if(tot > 60 && tot <= 90)
            printf("90\n");
        else
            printf("120\n");
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
        printf("%d\n", price);
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
        printf("%d\n", price);
    }

    return 0;
}
