#include <stdio.h>
int main() {
    int present = 0,
        absent = 0,
        x;
    for (int i = 0; i < 15; i++)
    {
        printf("\nStudent %d\n", i+1 );
        printf("Enter 1 if student is present and 0 if absent: ");
        scanf("%d", &x);

        if (x == 1)
        {
            present++ ;
        }
        else if (x == 0)
        {
            absent++ ;
        }
        else
        {
            printf("Invalid Input\n");
            i--;
        }
    }
    printf("\nTotal Students: 15\n");
    printf("Total Presents: %d\n", present);
    printf("Total Absentees: %d\n", absent);
    return 0;
}