#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number;
    char letter;
    printf("Enter a number:");
    scanf("%d", &number);
    letter = number;
    printf("%d = %c\n", number, letter);
    return 0;
}
