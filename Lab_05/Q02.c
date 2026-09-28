/*
Name: Abdul Wasy
Roll No: 26K-0023
Program: BSAI
Section: 1A
Course: Programming Fundamentals Lab
Instructor: Ms. Ramsha Jatt
Task: An AI-based financial system evaluates a person's eligibility for a loan
Dated: 27-09-2026
*/


#include <stdio.h>
int main()
{
    int income, credit_score, age;
    char e_loan;

    // Input income, credit score, age, and existing loan status
    printf("Enter your annual income (in PKR): ");
    scanf("%d", &income);
    printf("Enter your credit score: ");
    scanf("%d", &credit_score);
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("Do you have an existing loan? (Y/N): ");
    scanf(" %c", &e_loan);

    // Check eligibility for loan
    if (age >= 21) {

        if (income >= 100000 && credit_score >= 750 && (e_loan == 'N' || e_loan == 'n')) {
            printf("High Approval Chance");
        }
        else if (income >= 75000 && credit_score >= 650 && (e_loan == 'Y' || e_loan == 'y')) {
            printf("Manual Review");
        }
        else if (income >= 50000 && credit_score >= 600) {
            printf("Possibly Eligible");
        }
        else {
            printf("Rejected");
        }

    }
    else {
        printf("Rejected");
    }

    return 0;
}