/*
Name: Abdul Wasy Khanzada
Course: Programming Fundamentals - Lab
Class: BSAI-1A
Dated: 2026-10-28
*/

#include <stdio.h>

void withdraw(float *balance, float amount)
{
    if (amount <= *balance)
    {
        *balance -= amount;
        printf("Withdrawal successful. Amount withdrawn: %.2f\n", amount);
    }
    else
    {
        printf("Transaction Declined: Insufficient Balance\n");
    }
}

void deposit(float *balance, float amount)
{
    *balance += amount;
    printf("Deposit successful. Updated balance: %.2f\n", *balance);
}

int main()
{
    float balance = 5000.0;   /* initial account balance */
    float amount;
    char choice;

    printf("Current balance: %.2f\n", balance);
    printf("Select transaction type (D = Debit/Withdraw, C = Credit/Deposit): ");
    scanf(" %c", &choice);

    printf("Enter amount: ");
    scanf("%f", &amount);

    if (amount <= 0)
    {
        printf("Invalid amount!\n");
        return 1;
    }

    if (choice == 'D' || choice == 'd')
        withdraw(&balance, amount);
    else if (choice == 'C' || choice == 'c')
        deposit(&balance, amount);
    else
        printf("Invalid transaction type!\n");

    printf("Final account balance: %.2f\n", balance);

    return 0;
}
