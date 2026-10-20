/*
Name: Abdul Wasy
Roll No: 26K-0023
Program: BSAI
Section: 1A
Course: Programming Fundamentals Lab
Instructor: Ms. Ramsha Jatt
Task: Longest Word Finder
Dated: 20-10-2026
*/

#include <stdio.h>
int main() {
    char words[3][100];
    char longest[100] = "";
    int max_len = 0, max_row = -1, max_col = -1;

    for (int i = 0; i < 3; i++){
        printf("Enter row %d (3 space-separated words): ", i + 1);
        scanf(" %99[^\n]", words[i]);
    }

    for (int i = 0; i < 3; i++) {
        int j = 0;          // word (column) index within the row
        int k = 0;          // character position in the row
        while (words[i][k] != '\0')
        {
            while (words[i][k] == ' ')   k++;
            if (words[i][k] == '\0')     break;

            int start = k, len = 0;
            while (words[i][k] != ' ' && words[i][k] != '\0') 
            {
                k++;
                len++;
            }

            if (len > max_len) {
                max_len = len;
                max_row = i;
                max_col = j;
                for (int m = 0; m < len; m++)
                    longest[m] = words[i][start + m];
                longest[len] = '\0';
            }
            j++;
        }
    }

    printf("\nLongest word: %s (length %d)\n", longest, max_len);
    printf("Position: Row Index (i) = %d, Column Index (j) = %d\n", max_row, max_col);
    return 0;
}
