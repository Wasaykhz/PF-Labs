#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* 1 = uppercase, 2 = lowercase, 3 = digit, 4 = special (by ASCII value) */
int getCategory(char c)
{
    if (c >= 65 && c <= 90)  return 1;
    if (c >= 97 && c <= 122) return 2;
    if (c >= 48 && c <= 57)  return 3;
    return 4;
}

float similarity(char *pattern, char *attempt)
{
    int lenP = strlen(pattern);
    int lenA = strlen(attempt);
    int shorter = (lenP < lenA) ? lenP : lenA;
    int longer  = (lenP > lenA) ? lenP : lenA;
    int matches = 0, i;

    for (i = 0; i < shorter; i++) {
        if (getCategory(pattern[i]) == getCategory(attempt[i]))
            matches++;
    }

    return (float)matches / longer * 100.0;
}

int main()
{
    int n, i, best;
    char temp[200];
    char *pattern;
    char **attempts;
    float *score;

    printf("Enter number of participants: ");
    scanf("%d", &n);

    attempts = (char **)malloc(n * sizeof(char *));
    score = (float *)malloc(n * sizeof(float));
    if (attempts == NULL || score == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("Enter the password pattern: ");
    scanf("%s", temp);
    pattern = (char *)malloc(strlen(temp) + 1);
    if (pattern == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }
    strcpy(pattern, temp);

    for (i = 0; i < n; i++) {
        printf("Enter password attempt of participant %d: ", i + 1);
        scanf("%s", temp);

        attempts[i] = (char *)malloc(strlen(temp) + 1);
        if (attempts[i] == NULL) {
            printf("Memory allocation failed!\n");
            return 1;
        }
        strcpy(attempts[i], temp);

        score[i] = similarity(pattern, attempts[i]);
    }

    printf("\nPattern: %s\n\n", pattern);

    best = 0;
    for (i = 0; i < n; i++)
    {
        printf("Participant: %d \t Password: %s \t Similarity: %.2f%%\n",
                i + 1, attempts[i], score[i]);
        if (score[i] > score[best]) best = i;
    }

    printf("\nHighest similarity: participant %d with \"%s\" (%.2f%%)\n",
                                        best + 1, attempts[best], score[best]);

    for (i = 0; i < n; i++) {
        free(attempts[i]);
        attempts[i] = NULL;
    }
    free(attempts);
    free(score);
    free(pattern);
    attempts = NULL;
    score = NULL;
    pattern = NULL;

    return 0;
}
