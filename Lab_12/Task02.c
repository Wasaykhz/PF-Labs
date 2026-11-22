#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char **feedback;
    char temp[1000];
    int count, extra, i, totalChars = 0;
    char **p, **longest;
    char *c;
    int len, maxLen;

    printf("Enter number of feedback entries: ");
    scanf("%d", &count);
    getchar();   /* to murder the newline leftover Hahaha*/

    feedback = (char **)malloc(count * sizeof(char *));
    if (feedback == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    for (i = 0; i < count; i++) 
    {
        printf("Feedback %d: ", i + 1);
        fgets(temp, sizeof(temp), stdin);
        temp[strcspn(temp, "\n")] = '\0';

        feedback[i] = (char *)malloc(strlen(temp) + 1);   /* each string separately */
        if (feedback[i] == NULL)
        {
            printf("Memory allocation failed!\n");
            return 1;
        }
        strcpy(feedback[i], temp);
    }

    /* reallocating more feedbacks memory */
    printf("\nHow many more feedback entries do you want to add? ");
    scanf("%d", &extra);
    getchar();

    if (extra > 0)
    {
        char **bigger = (char **)realloc(feedback, (count + extra) * sizeof(char *));
        if (bigger == NULL) {
            printf("Reallocation failed!\n");
            return 1;
        }
        feedback = bigger;

        for (i = count; i < count + extra; i++) {
            printf("Feedback %d: ", i + 1);
            fgets(temp, sizeof(temp), stdin);
            temp[strcspn(temp, "\n")] = '\0';

            feedback[i] = (char *)malloc(strlen(temp) + 1);
            if (feedback[i] == NULL) {
                printf("Memory allocation failed!\n");
                return 1;
            }
            strcpy(feedback[i], temp);
        }
        count += extra;
    }

    /* pointer traversal*/
    longest = feedback;
    maxLen = -1;
    for (p = feedback; p < feedback + count; p++)
    {
        len = 0;
        for (c = *p; *c != '\0'; c++)
            len++;

        totalChars += len;

        if (len > maxLen)
        {
            maxLen = len;
            longest = p;
        }
    }

    /* Output */
    printf("\n--- All Feedback Entries ---\n");
    for (i = 0; i < count; i++)
        printf("%d. %s\n", i + 1, feedback[i]);

    printf("\nTotal characters across all entries: %d\n", totalChars);
    printf("Longest feedback (%d characters): %s\n", maxLen, *longest);

    for (i = 0; i < count; i++)
    {
        free(feedback[i]);
        feedback[i] = NULL;
    }
    free(feedback);
    feedback = NULL;

    return 0;
}
