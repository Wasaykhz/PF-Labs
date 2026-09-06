#include <stdio.h>

int main() {
    char fullName[150];

    printf("Enter your full name: ");
    scanf(" %[^\n]c", fullName);

    printf("Hello,\n");
    printf("%s\n", fullName);

    return 0;
}