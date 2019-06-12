#include <stdio.h>

int f(int n){
    if(n == 0 || n == 1)
        return (n + 1);
    else
        return (f(n - 1) + f(floor(n / 2)));
}

int main(void){
    int k;
    scanf("%d", &k);
    int result = f(k);
    printf("%d\n", result);

    return 0;
}
