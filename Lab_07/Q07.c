/*
Name: Abdul Wasy
Roll No: 26K-0023
Program: BSAI
Section: 1A
Course: Programming Fundamentals Lab
Instructor: Ms. Ramsha Jatt
Task: Delete Column in 2D Array
Dated: 20-10-2026
*/

#include <stdio.h>
int main() {
    float sensor_data[3][4];
    int col;

    printf("Enter temperature readings (3 days x 4 sensors):\n");
    for (int r = 1; r <= 3; r++) {
        for (int c = 1; c <= 4; c++) {
            printf("  Day %d, Sensor %d: ", r, c);
            scanf("%f", &sensor_data[r][c]);
        }
    }

    printf("Enter column index of defective sensor (0 to 3): ");
    scanf("%d", &col);
    if (col < 0 || col > 3) {
        printf("Invalid column index!\n");
        return 1;
    }

    for (int r = 1; r <= 3; r++)
        for (int c = col + 1; c <= 4; c++)
            sensor_data[r][c - 1] = sensor_data[r][c];

    printf("\nUpdated 3x3 matrix:\n");
    for (int r = 1; r <= 3; r++) {
        for (int c = 1; c <= 3; c++)
            printf("%8.2f", sensor_data[r][c]);
        printf("\n");
    }
    return 0;
}
