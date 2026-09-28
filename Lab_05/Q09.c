/*
Name: Abdul Wasy
Roll No: 26K-0023
Program: BSAI
Section: 1A
Course: Programming Fundamentals Lab
Instructor: Ms. Ramsha Jatt
Task: AI Mathematical Calculator
Dated: 27-09-2026
*/

#include <stdio.h>
#include <math.h>

int main() {
    int choice;
    double num, base, exponent;

    printf("===== AI Mathematical Calculator =====\n");
    printf("1. Square Root\n");
    printf("2. Power\n");
    printf("3. Absolute Value\n");
    printf("4. Floor\n");
    printf("5. Ceiling\n");

    printf("\nSelect an operation: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Enter a number: ");
            scanf("%lf", &num);

            if (num >= 0)
                printf("Square Root: %.2lf", sqrt(num));
            else
                printf("Invalid input. Square root of a negative number is not allowed.");
            break;

        case 2:
            printf("Enter base and exponent with space: ");
            scanf("%lf %lf", &base, &exponent);

            printf("Power: %.2lf", pow(base, exponent));
            break;

        case 3:
            printf("Enter a number: ");
            scanf("%lf", &num);

            printf("Absolute Value: %.2lf", fabs(num));
            break;

        case 4:
            printf("Enter a number: ");
            scanf("%lf", &num);

            printf("Floor: %.2lf", floor(num));
            break;

        case 5:
            printf("Enter a number: ");
            scanf("%lf", &num);

            printf("Ceiling: %.2lf", ceil(num));
            break;

        default:
            printf("Invalid menu choice.");
    }
    
    return 0;
}