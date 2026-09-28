/*
Name: Abdul Wasy
Roll No: 26K-0023
Program: BSAI
Section: 1A
Task: An AI-based university system that evaluates a student's performance.
Course: Programming Fundamentals Lab
Instructor: Ms. Ramsha Jatt
Dated: 27-09-2026
*/


#include <stdio.h>
int main() {
    int maths, programming, ai;
    double attendence, avg;

    // Input marks and attendance percentage
    printf("Enter marks for Maths: ");
    scanf("%d", &maths);
    printf("Enter marks for Programming: ");
    scanf("%d", &programming);
    printf("Enter marks for AI: ");
    scanf("%d", &ai);
    printf("Enter attendance percentage: ");
    scanf("%lf", &attendence);

    // Calculate average marks
    avg = (maths + programming + ai) / 3.0;
    
    // Check eligibility and performance
    if (maths >= 50 && programming >= 50 && ai >= 50 && attendence >= 75)
    {
        // Student is eligible, evaluating performance
        if (avg >= 80)
        {
            printf("Excellent performance!\n");
        } else if (avg >= 70) {
            printf(" Very Good performance!\n");
        } else if (avg >= 60) {
            printf("Good performance.\n");
        } else if (avg >= 50) {
            printf("Satisfactory performance.\n");
        } else {
            printf("Poor performance.\n");
        }
         
    }
    else
    {
        // Student is not eligible
        printf("Student is Not Eligible\n");
    }
    return 0;
}
