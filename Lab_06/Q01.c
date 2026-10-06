#include <stdio.h>
int main() {
    int pin, sum = 0, temp;
    printf("Enter a 4 Digit PIN: ");
    scanf("%d", &pin);

    while (pin != 0)
    {
        temp = pin % 10;
        sum += temp;
        pin = pin/10;
    }
    
    if (sum > 10)
        printf("Strong PIN");
    else
        printf("Weak PIN");
    
    return 0;
}
