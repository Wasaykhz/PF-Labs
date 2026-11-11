#include <stdio.h>

int main()
{
    int rollNo;
    char name[50];
    float marks;
    FILE *fptr;

    fptr = fopen("marks.txt", "r");
    if (fptr == NULL)
    {
        printf("Error: File Not Found!\n");
        return 1;
    }

    printf("%-10s %-20s %-8s\n", "Roll No", "Name", "Marks");
    printf("---------------------------------------\n");

    while (fscanf(fptr, "%d %s %f", &rollNo, name, &marks) == 3)
    {
        printf("%-10d %-20s %-8.2f\n", rollNo, name, marks);
    }

    fclose(fptr);

    return 0;
}
