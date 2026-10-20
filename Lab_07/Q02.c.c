/*
Name: Abdul Wasy
Roll No: 26K-0023
Program: BSAI
Section: 1A
Course: Programming Fundamentals Lab
Instructor: Ms. Ramsha Jatt
Task: A cybersecurity monitoring system
Dated: 19-10-2026
*/

#include <stdio.h>
int main() {
    char logs[3][30];   // [0] = username, [1] = status, [2] = timestamp
    int ucc = 0;

    for (int i = 0; i < 3; i++) {
        printf("Enter log entry %d (user,status,time): ", i + 1);
        scanf(" %29[^,],%29[^,],%29[^\n]", logs[0], logs[1], logs[2]);

        printf("Username : %s\nStatus   : %s\nTimestamp: %s\n", logs[0], logs[1], logs[2]);
        for (int i = 0; i < 3; i++) {
            for (int j = 0; logs[i][j] != '\0'; j++) {
                if (logs[i][j] >= 'A' && logs[i][j] <= 'Z')
                    ucc++;
            }
        }
    }

    printf("\nTotal uppercase letters across all log entries: %d\n", ucc);
    return 0;
}
