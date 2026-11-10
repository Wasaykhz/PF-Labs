#include <stdio.h>
#include <string.h>

int main()
{
    char names[10][50];
    char temp[50];
    int i, j;

    printf("Enter 10 student names:\n");
    for (i = 0; i < 10; i++)
    {
        printf("Name %d: ", i + 1);
        fgets(names[i], 50, stdin);
        names[i][strcspn(names[i], "\n")] = '\0';   /* remove newline */
    }

    /* Bubble sort, A to Z */
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 9 - i; j++)
        {
            if (strcmp(names[j], names[j + 1]) > 0)
            {
                strcpy(temp, names[j]);
                strcpy(names[j], names[j + 1]);
                strcpy(names[j + 1], temp);
            }
        }
    }

    printf("\nSorted roster (A to Z):\n");
    for (i = 0; i < 10; i++)
        printf("%2d. %s\n", i + 1, names[i]);

    return 0;
}
