#include <stdio.h>
int main() {
    int num, rev = 0, temp;
    printf("Enter a number: ");
    scanf("%d", &num);

    while (num != 0)
    {
        temp = num % 10;
        rev = temp + rev * 10;
        num = num / 10;
    }
    printf("Reverse: %d", rev);
    return 0;
}