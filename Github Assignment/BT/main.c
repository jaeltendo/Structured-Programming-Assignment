#include <stdio.h>
#include <stdlib.h>

int main()
{
    int account_number;
    float old_limit, new_limit, current_balance;
    for(int i = 1; i <= 3; i++)
    {
        printf("Enter account number:");
        scanf("%d", &account_number);
        printf("Enter credit limit before recession:");
        scanf("%f", &old_limit);
        printf("Enter current balance:");
        scanf("%f", &current_balance);

        new_limit = old_limit / 2.0;
        printf("New credit limit:$%.2f\n", new_limit);
        if (current_balance > new_limit)
        {
            printf("WARNING: Acount %d exceeds the new credit limit!\n", account_number);
        }else{
        printf("Account %d is within the new credit limit.\n", account_number);
        }printf("\n");
    }
    return 0;
}
