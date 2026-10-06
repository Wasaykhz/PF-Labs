#include <stdio.h>
int main() {
    int num, rev = 0, temp;
    printf("Enter Library Book Code: ");
    scanf("%d", &num);
    int dup = num;

    while (num != 0)
    {
        temp = num % 10;
        rev = temp + rev * 10;
        num = num / 10;
    }

    if (dup == rev)
    {
        printf("Library Book Code is Valid");
    }
    else
    {
        printf("Library Book Code is Not Valid");
    }
    
    return 0;
}