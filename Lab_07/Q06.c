/*
Name: Abdul Wasy
Roll No: 26K-0023
Program: BSAI
Section: 1A
Course: Programming Fundamentals Lab
Instructor: Ms. Ramsha Jatt
Task: Insert Row in 2D Array
Dated: 20-10-2026
*/

#include <stdio.h>
int main() {
    int arr[4][3];
    int idx;

    printf("Enter initial 3x3 production data:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("  Workstation %d, Shift %d: ", i, j + 1);
            scanf("%d", &arr[i][j]);
        }
    }

    printf("Enter target row index for insertion (0 to 3): ");
    scanf("%d", &idx);
    if (idx < 0 || idx > 3) {
        printf("Invalid index!\n");
        return 1;
    }

    int new_row[3];
    printf("Enter 3 new production values: ");
    for (int j = 0; j < 3; j++)     scanf("%d", &new_row[j]);

    for (int i = 3; i > idx; i--)
        for (int j = 0; j < 3; j++) arr[i][j] = arr[i - 1][j];

    for (int j = 0; j < 3; j++)     arr[idx][j] = new_row[j];

    printf("\nUpdated 4x3 matrix:\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 3; j++) printf("%6d", arr[i][j]);
        printf("\n");
    }
    return 0;
}
