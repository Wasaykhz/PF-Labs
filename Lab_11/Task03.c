#include <stdio.h>

struct Item {
    int id;
    char name[30];
    int quantity;
    float unitPrice;
};

int main() {
    struct Item items[5];
    float total = 0;
    int searchId, found = 0;

    for (int i = 0; i < 5; i++) {
        printf("Item %d\n", i + 1);
        printf("ID: ");
        scanf("%d", &items[i].id);
        printf("Name: ");
        scanf("%s", items[i].name);
        printf("Quantity: ");
        scanf("%d", &items[i].quantity);
        printf("Unit price: ");
        scanf("%f", &items[i].unitPrice);
        
        printf("\n");
        total += items[i].quantity * items[i].unitPrice;
    }

    printf("\nTotal inventory value: %.2f\n", total);

    printf("\nEnter item ID to search: ");
    scanf("%d", &searchId);

    for (int i = 0; i < 5; i++) {
        if (items[i].id == searchId) {
            printf("Found!\n");
            printf("ID: %d\nName: %s\nQuantity: %d\nUnit price: %.2f\n",
                   items[i].id, items[i].name, items[i].quantity, items[i].unitPrice);
            found = 1;
            break;
        }
    }

    if (!found)
        printf("No item with ID %d.\n", searchId);

    return 0;
}
