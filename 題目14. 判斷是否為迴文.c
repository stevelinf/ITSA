#include <stdio.h>

int main(void){
    char number[1000];
    int i = 0, length = 0, flag = 1;
    char tmp;
    memset(number, 0, sizeof(number));
    scanf("%c", &tmp);
    while(tmp != '\n'){
        length++;
        number[i++] = tmp;
        scanf("%c", &tmp);
    }
    for(i = 0; i < length; i++){
        if(number[i] != number[length - 1 - i]){
            printf("NO\n");
            flag = 0;
            break;
        }
    }
    if(flag == 1)
        printf("YES\n");

    return 0;
}
