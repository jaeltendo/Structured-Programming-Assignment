#include <stdio.h>
#include <stdlib.h>

int main()
{
    int total_seconds;
    int hours, minutes, seconds;
    printf("Enter total seconds elapsed:");

    scanf("%d", &total_seconds);
    hours = total_seconds / 3600;
    minutes = (total_seconds % 3600) / 60;
    seconds = total_seconds % 60;

    printf("Converted time:%02d:%02d:%02d\n", hours, minutes, seconds);
    return 0;
}
