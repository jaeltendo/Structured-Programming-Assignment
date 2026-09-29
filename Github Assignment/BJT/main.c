#include <stdio.h>
#include <stdlib.h>

int main()
{
    int count;
    int break_flag = 0;
    for (count = 1; count <= 10 && !break_flag; count++){
        if(count == 5){
            break_flag = 1;
        }else{
        printf("%d", count);
        }
    }
    printf("Broke out of loop at count = %d\n", count);
    return 0;
}
