#include <stdio.h>
int main() {
    int readings,
        temp = 0,
        even = 0,
        odd = 0;

    printf("Enter Electricity Meter Readings: ");
    scanf("%d",&readings);

    while (readings != 0)
    {
        temp = readings % 10;
        if (temp % 2)
        {
            odd++;
        }
        else
        {
            even++;
        }
        readings /= 10;
    }
    printf("\nTotal Even Digits: %d", even);
    printf("\nTotal Odd Digits: %d", odd);
    return 0;
}