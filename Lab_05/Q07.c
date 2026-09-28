/*
Name: Abdul Wasy
Roll No: 26K-0023
Program: BSAI
Section: 1A
Course: Programming Fundamentals Lab
Instructor: Ms. Ramsha Jatt
Task: AI Prediction Confidence System
Dated: 27-09-2026
*/

#include <stdio.h>
int main() {
    float Confidence, threshold;

    printf("Enter model confidence level (%%): ");
    scanf("%f", &Confidence);
    printf("Enter required threshold level (%%): \n");
    scanf("%f", &threshold);

    // Checking Confidence level
    if (Confidence >= 90)
        printf("Confidence level: Very High\n");
    else if (Confidence >= 75)
        printf("Confidence level: High\n");
    else if (Confidence >= 50)
        printf("Confidence level: moderate\n");
    else
        printf("Confidence level: Low\n");

    // checking if prediction is accepted
    if (Confidence >= threshold && Confidence >= 50)
        printf("Prediction Status: Accepted\n");
    else
        printf("Prediction Status: Rejected\n");
    
    return 0;
}