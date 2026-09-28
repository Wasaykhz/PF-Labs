/*
Name: Abdul Wasy
Roll No: 26K-0023
Program: BSAI
Section: 1A
Course: Programming Fundamentals Lab
Instructor: Ms. Ramsha Jatt
Task: A smart AI face-recognition security system
Dated: 27-09-2026
*/


#include <stdio.h>

int main() {
    float confidence;
    int userType;

    printf("Enter face recognition confidence (%%): ");
    scanf("%f", &confidence);

    printf("Enter user type (1 = Authorized, 0 = Unauthorized): ");
    scanf("%d", &userType);

    if (confidence >= 80)
    {
        printf("Face Recognized.\n");

        // Ternary operator for access decision
        printf("%s\n", (userType == 1) ? "Access Granted." : "Access Denied.");

    }
    else if (confidence >= 50 && confidence < 80)
    {
        printf("Manual Verification Required.\n");

        // Nested if-else
        if (userType == 1)
            printf("Authorized user. Verify manually.\n");
        else
            printf("Unauthorized user. Access Denied.\n");

    }
    else
    {
        printf("Face Not Recognized.\n");

        // Ternary operator
        printf("%s\n",
               (userType == 1) ? "Access Denied." : "Access Denied.");
    }

    return 0;
}