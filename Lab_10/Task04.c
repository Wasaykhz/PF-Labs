#include <stdio.h>
#include <string.h>

int main()
{
    char name[50];
    int accountNo;
    float amount;
    FILE *fptr;

    printf("Enter customer name: ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = '\0';

    printf("Enter account number: ");
    scanf("%d", &accountNo);

    printf("Enter withdrawal amount: ");
    scanf("%f", &amount);

    fptr = fopen("bank_log.txt", "a");
    if (fptr == NULL)
    {
        printf("Error: could not open bank_log.txt\n");
        return 1;
    }

    fprintf(fptr, "Name: %s | Account: %d | Withdrawal: %.2f\n",
            name, accountNo, amount);
    fclose(fptr);

    printf("Transaction logged successfully.\n");

    return 0;
}
