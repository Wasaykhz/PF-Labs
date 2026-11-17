#include <stdio.h>

struct Product {
    int id;
    char name[50];
    char category[30];
    float price;
    int stock;
};

void displayProductDetails(struct Product p) {
    float finalPrice = p.price - (p.price * 5 / 100);   // 5% off

    printf("ID: %d\n", p.id);
    printf("Name: %s\n", p.name);
    printf("Category: %s\n", p.category);
    printf("Original price: %.2f\n", p.price);
    printf("Stock: %d\n", p.stock);
    printf("Price after 5%% discount: %.2f\n\n", finalPrice);
}

int main() {
    struct Product p1 = {101, "Wireless Mouse", "Electronics", 2500.0, 40};
    struct Product p2 = {102, "Notebook", "Stationery", 300.0, 150};

    displayProductDetails(p1);
    displayProductDetails(p2);
    return 0;
}
