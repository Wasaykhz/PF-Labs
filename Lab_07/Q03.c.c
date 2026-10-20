/*
Name: Abdul Wasy
Roll No: 26K-0023
Program: BSAI
Section: 1A
Course: Programming Fundamentals Lab
Instructor: Ms. Ramsha Jatt
Task: Smart Messaging Portal
Dated: 19-10-2026
*/

#include <stdio.h>
int main()
{
    char secret_messages[3][100];
    int c;
    for (int i = 0; i < 3; i++)
    {
        secret_messages[i][0] = '\0';
        printf("Enter encrypted line %d: ", i + 1);
        scanf("%99[A-Z ]", secret_messages[i]);
        
        while ((c = getchar()) != '\n' && c != EOF);
    }

    printf("\n--- Filtered Messages ---\n");
    for (int i = 0; i < 3; i++) {
        int spaces = 0, words = 0, in_word = 0;

        for (int j = 0; secret_messages[i][j] != '\0'; j++) {
            if (secret_messages[i][j] == ' ') {
                spaces++;
                in_word = 0;
            } else if (in_word == 0) {
                in_word = 1;
                words++;
            }
        }
        printf("Message %d: \"%s\"\n  Spaces: %d | Words: %d\n", i + 1, secret_messages[i], spaces, words);
    }
    return 0;
}
