#include <stdio.h>
#include <stdlib.h>

int main()
{
    int rows, i, j, k;
    int total_top_rows;
    do{
        printf("Enter an odd number of rows (1-19):");
        scanf("%d", &rows);
    }while (rows < 1 || rows > 19 || rows % 2 == 0 );

    total_top_rows = (rows / 2) + 1;

    for(i = 1; i <= total_top_rows; i++){
        for(j = 1; j <= total_top_rows - i; j++){
            printf(" ");
        }
        for(k = 1; k <=(2 * i - 1); k++){
            printf("*");
        }
        printf("\n");
    }
    for(i = total_top_rows - 1; i >= 1; i--){
        for(j = 1; j <= total_top_rows - i; j++){
            printf(" ");
             }
        for(k = 1; k <=(2 *i - 1); k++){

            printf("*");
        }
        printf("\n");
    }
    return 0;
}
