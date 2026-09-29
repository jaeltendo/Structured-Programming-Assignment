#include <stdio.h>
#include <stdlib.h>

int main()
{
    int account_number;
    float mortgage_amount, interest_rate, monthly_interest;
    int term_years;
    printf("Enter account_number (-1 to end):");
    scanf("%d", &account_number);
    while (account_number != -1){

    printf("Enter mortgage_amount (in dollars):");
    scanf("%f", &mortgage_amount);
    printf("Enter mortgage term (in years)");
    scanf("&d", &term_years);
    printf("Enter interest rate:");
    scanf("%f", &interest_rate);

    monthly_interest = (mortgage_amount * interest_rate * term_years) / 12.0;

    printf("The Monthly Payable Interest : $%.2f\n\n", monthly_interest);
    printf("Enter account_number (-1 to end):");
    scanf("%d", &account_number);
    }
    return 0;
}
