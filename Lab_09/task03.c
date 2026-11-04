/*
Name: Abdul Wasy Khanzada
Course: Programming Fundamentals - Lab
Class: BSAI-1A
Dated: 2026-11-03
*/

#include <stdio.h>

int main()
{
    int image[3][3];
    int (*ptr)[3] = image;   /* pointer to an array of 3 integers */
    int i, j;

    printf("Enter 9 pixel values:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("Pixel [%d][%d]: ", i, j);
            scanf("%d", (*(ptr + i) + j));
        }
    }

    /* Increase brightness: multiply each pixel by 2 */
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            *(*(ptr + i) + j) = *(*(ptr + i) + j) * 2;
        }
    }

    printf("\nUpdated image (brightness x2):\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%4d ", *(*(ptr + i) + j));
        }
        printf("\n");
    }

    return 0;
}
