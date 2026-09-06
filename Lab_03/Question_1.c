#include <stdio.h>

int main() {
    char name[100], city[100];
    int age;

    printf("Enter your name: ");
    scanf(" %[^\n]s", name);

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your city: ");
    scanf(" %[^\n]s", city);

    printf("\nName: %s\n", name);
    printf("Age: %d\n", age);
    printf("City: %s\n", city);

    return 0;
}
