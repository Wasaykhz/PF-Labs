#include <stdio.h>
int main() {
    int arr[10];
    printf("Enter 8 Numbers\n");
    for (int i = 0; i < 8; i++)
    {
        printf("Enter %dth element: ",i+1);
        scanf("%d",&arr[i]);
    }
    
    printf("\nComplete Array: ");
    for (int i = 0; i < 8; i++) printf("| %d ", arr[i]);
    printf("|\n");
    
    int largest = arr[0];
    int smallest = arr[0];
    for (int i = 1; i < 8; i++)
    {
        if (largest < arr[i]) largest = arr[i];
        if (smallest > arr[i]) smallest = arr[i];
    }
    printf("Largest Number: %d\n", largest);
    printf("Smallest Number: %d\n", smallest);
    
    int search, found = 0;
    printf("\nSearch Number: ");
    scanf("%d", &search);
    for (int i = 0; i < 8; i++)
    {
        if (search == arr[i])
        {
            printf("%d found at %dth index.", search, i);
            found = 1;
            break;
        }
    }
    if (found == 0) printf("%d not found in array.", search);
        
    
    int index, num, size = 8;
    printf("\n\nEnter index for insertion: ");
    scanf("%d", &index);
    printf("Enter number to insert: ");
    scanf("%d", &num);
    for (int i = size; i > index; i--) arr[i] = arr[i-1];
    arr[index] = num;
    size++;

    int deleteIndex;
    printf("\nEnter index to delete: ");
    scanf("%d", &deleteIndex);
    for (int i = deleteIndex; i < size - 1; i++) arr[i] = arr[i + 1];
    size--;

    printf("\nFinal array: ");
    for (int i = 0; i < size; i++) printf("%d ", arr[i]);

    return 0;
}
