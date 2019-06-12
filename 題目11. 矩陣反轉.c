#include <stdio.h>

int main(void){
    int i, j, col, row;
    scanf("%d%d", &row, &col);
    int array[row][col];
    for(i = 0; i < row; i++)
        for(j = 0; j < col; j++)
            scanf("%d", &array[i][j]);
    for(i = 0; i < col; i++){
        for(j = 0; j < row; j++)
            printf("%d ", array[j][i]);
        printf("\n");
    }
    return 0;
}
