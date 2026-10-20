/*
Name: Abdul Wasy
Roll No: 26K-0023
Program: BSAI
Section: 1A
Course: Programming Fundamentals Lab
Instructor: Ms. Ramsha Jatt
Task: Vowel Counter
Dated: 20-10-2026
*/

#include <stdio.h>
int main()
{
    char sentences[3][100];
    int i, j;

    printf("Enter a paragraph of 3 sentences separated by semicolons:\n");
    for (i = 0; i < 3; i++) {
        sentences[i][0] = '\0';
        scanf(" %99[^;\n]%*c", sentences[i]);
    }

    printf("\n--- Vowel Count per Sentence ---\n");
    for (i = 0; i < 3; i++) {
        int vowels = 0;
        
        for (j = 0; sentences[i][j] != '\0'; j++) {
            char ch = sentences[i][j];
            
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
                ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
                vowels++;
            }
        }
        
        printf("Sentence %d: \"%s\"\n", i + 1, sentences[i]);
        printf("  Vowels: %d\n", vowels);
    }

    return 0;
}
