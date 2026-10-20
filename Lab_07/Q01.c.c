/*
Name: Abdul Wasy
Roll No: 26K-0023
Program: BSAI
Section: 1A
Course: Programming Fundamentals Lab
Instructor: Ms. Ramsha Jatt
Task: Student Details Registration System
Dated: 19-10-2026
*/


#include <stdio.h>
int main()
{
    char student_names[3][50];
    int marks[3][3];
    for (int i = 0; i < 3; i++)
    {
        printf("Enter details for student 0%d:\n", i + 1);
        printf("Enter full name: ");
        scanf(" %49[^\n]", student_names[i]);

        for (int j = 0; j < 3; j++)
        {
            printf("Enter marks for subject %d: ", j + 1);
            scanf("%d", &marks[i][j]);
        }
    }

    printf("\n%-25s %-8s %-8s %-8s %s\n", "Name", "Sub1", "Sub2", "Sub3", "Average");
    printf("---------------------------------------------------------------\n");
    for (int i = 0; i < 3; i++) {
        int sum = 0;
        for (int j = 0; j < 3; j++)
            sum += marks[i][j];
        printf("%-25s %-8d %-8d %-8d %.2f\n", student_names[i],
               marks[i][0], marks[i][1], marks[i][2], sum / 3.0);
    }
    return 0;
}
