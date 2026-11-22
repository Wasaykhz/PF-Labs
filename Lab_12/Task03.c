#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* returns 1 if str has at least one digit, otherwise 0 */
int containsDigit(char *str)
{
    while (*str != '\0') {
        if (*str >= '0' && *str <= '9')
            return 1;
        str++;
    }
    return 0;
}

int main()
{
    int n, i, w;
    char **names;
    char temp[100];

    printf("Enter number of usernames: ");
    scanf("%d", &n);

    names = (char **)malloc(n * sizeof(char *));
    if (names == NULL)
    {
        printf("Memory allocation failed!\n");
        return 1;
    }

    for (i = 0; i < n; i++)
    {
        printf("Enter username %d: ", i + 1);
        scanf("%s", temp);

        names[i] = (char *)malloc(strlen(temp) + 1);
        if (names[i] == NULL)
        {
            printf("Memory allocation failed!\n");
            return 1;
        }
        strcpy(names[i], temp);
    }

    /* removing usernames containing digits */
    w = 0;
    for (i = 0; i < n; i++)
    {
        if (containsDigit(names[i]))
        {
            free(names[i]);
        }
        else
        {
            names[w] = names[i];
            w++;
        }
    }

    printf("\nValid usernames (no digits):\n");
    if (w == 0)     printf("None\n");
    for (i = 0; i < w; i++)     printf("%d. %s\n", i + 1, names[i]);
    for (i = 0; i < w; i++){
        free(names[i]);
        names[i] = NULL;
    }
    free(names);
    names = NULL;

    return 0;
}
