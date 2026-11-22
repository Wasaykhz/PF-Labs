#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, idx;
    int *ratings;
    int total, highest;
    float average;

    printf("Enter number of movie categories: ");
    scanf("%d", &n);

    ratings = (int *)malloc(n * sizeof(int));
    if (ratings == NULL)
    {
        printf("Memory allocation failed!\n");
        return 1;
    }

    for (i = 0; i < n; i++)
    {
        printf("Enter rating count for category %d: ", i);
        scanf("%d", &ratings[i]);
    }

    total = 0;
    highest = 0;
    for (i = 0; i < n; i++)
    {
        total += ratings[i];
        if (ratings[i] > ratings[highest])
            highest = i;
    }
    average = (float)total / n;

    printf("\nTotal ratings across all categories: %d\n", total);
    printf("Average ratings per category: %.2f\n", average);
    printf("Highest rating count: category %d (%d ratings)\n", highest, ratings[highest]);

    printf("\nEnter category index to update (0 to %d): ", n - 1);
    scanf("%d", &idx);

    if (idx < 0 || idx >= n)
    {
        printf("Invalid category index!\n");
    }
    else
    {
        printf("Enter new rating count for category %d: ", idx);
        scanf("%d", &ratings[idx]);

        total = 0;
        highest = 0;
        for (i = 0; i < n; i++)
        {
            total += ratings[i];
            if (ratings[i] > ratings[highest])
                highest = i;
        }
        average = (float)total / n;

        printf("\nUpdated rating counts:\n");
        for (i = 0; i < n; i++)
            printf("Category %d: %d\n", i, ratings[i]);

        printf("\nTotal ratings: %d\n", total);
        printf("Average ratings per category: %.2f\n", average);
        printf("Highest rating count: category %d (%d ratings)\n", highest, ratings[highest]);
    }

    free(ratings);
    ratings = NULL;

    return 0;
}
