#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int i = 1;
    int sum = 0, sum_squares = 0, sum_cubes = 0;

    printf("Enter n:");
    scanf("%d", &n);
    while (i <= n){
        sum += i;
        sum_squares += i * i;
        sum_cubes += i * i * i;
        i++;
    }
    printf("Results for n 1 to %d:\n", n);
    printf("Sum: %d\n", sum);
    printf("Sum of squares:%d\n", sum_squares);
    printf("Sum of cubes: %d\n", sum_cubes);
    return 0;
}
