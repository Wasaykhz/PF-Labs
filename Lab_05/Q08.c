/*
Name: Abdul Wasy
Roll No: 26K-0023
Program: BSAI
Section: 1A
Course: Programming Fundamentals Lab
Instructor: Ms. Ramsha Jatt
Task: AI Model Permission System
Dated: 27-09-2026
*/

#include <stdio.h>

int main() {
    int permission;

    printf("===== AI Model Permission System =====\n");
    printf("View = 1 | Train = 2 | Test = 4 | Deploy = 8\n");

    printf("\nEnter permission value (0-15): ");
    scanf("%d", &permission);

    // Check individual permissions
    if (permission & 1)
        printf("View: Allowed\n");
    else
        printf("View: Not Allowed\n");

    if (permission & 2)
        printf("Train: Allowed\n");
    else
        printf("Train: Not Allowed\n");

    if (permission & 4)
        printf("Test: Allowed\n");
    else
        printf("Test: Not Allowed\n");

    if (permission & 8)
        printf("Deploy: Allowed\n");
    else
        printf("Deploy: Not Allowed\n");

    // Check Training and Deployment together
    if ((permission & 2) && (permission & 8))
        printf("\nTraining + Deployment: Allowed");
    else
        printf("\nTraining + Deployment: Not Allowed");

    return 0;
}