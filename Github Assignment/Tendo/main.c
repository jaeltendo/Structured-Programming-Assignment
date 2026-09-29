#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    int sum = 0;
    for(int i = 1; i <= 100; i+= 7)
    {
        sum += i;
    }
    printf("The sum of all multiples of 7 from 1 to 100: %d\n", sum);
    return 0;
}
