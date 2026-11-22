#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, index;
    int *stock;
    int total, lowest;
    float average;

    printf("Enter number of book categories: ");
    scanf("%d", &n);

    stock = (int *)malloc(n * sizeof(int));
    if (stock == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    for (i = 0; i < n; i++) {
        printf("Enter stock for category %d: ", i);
        scanf("%d", &stock[i]);
    }

    /* total, average, lowest */
    total = 0;
    lowest = 0;
    for (i = 0; i < n; i++) {
        total += stock[i];
        if (stock[i] < stock[lowest])
            lowest = i;
    }
    average = (float)total / n;

    printf("\nTotal stock: %d\n", total);
    printf("Average stock per category: %.2f\n", average);
    printf("Category with lowest stock: %d (stock = %d)\n", lowest, stock[lowest]);

    /* update stock of a category */
    printf("\nEnter category index to update (0 to %d): ", n - 1);
    scanf("%d", &index);

    if (index < 0 || index >= n)    printf("Invalid category index!\n");
    else {
        printf("Enter new stock for category %d: ", index);
        scanf("%d", &stock[index]);

        printf("\nUpdated Stocks:\n");
        for (i = 0; i < n; i++)
            printf("Category %d: %d\n", i, stock[i]);
    }

    free(stock);
    stock = NULL;

    return 0;
}
