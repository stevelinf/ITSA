#include <stdio.h>
#include <stdlib.h>

int main(void){
    int mile;
    double kilometer;
    scanf("%d", &mile);
    kilometer = (double)(mile * 1.6);
    printf("%.1f\n", kilometer);

    return 0;
}
