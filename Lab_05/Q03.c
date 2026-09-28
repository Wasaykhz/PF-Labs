/*
Name: Abdul Wasy
Roll No: 26K-0023
Program: BSAI
Section: 1A
Course: Programming Fundamentals Lab
Instructor: Ms. Ramsha Jatt
Task: An image-classification system
Dated: 27-09-2026
*/

#include <stdio.h>

int main() {
    int category, subcategory;

    // Display main categories
    printf("===== Image Classification System =====\n");
    printf("1. Animal\n");
    printf("2. Vehicle\n");
    printf("3. Food\n");
    printf("4. Human\n");

    // Input category selection
    printf("\nSelect category: ");
    scanf("%d", &category);

    // Display subcategories based on selected category
    switch (category) {

        // Subcategories for Animal
        case 1:
            printf("\n1. Cat\n2. Dog\n3. Bird\n");
            printf("Select subcategory: ");
            scanf("%d", &subcategory);

            switch (subcategory) {
                case 1: printf("\nClassification: Animal - Cat");
                break;

                case 2: printf("\nClassification: Animal - Dog");
                break;

                case 3: printf("\nClassification: Animal - Bird");
                break;

                default: printf("\nInvalid subcategory");
            }
            break;

        // Subcategories for Vehicle
        case 2:
            printf("\n1. Car\n2. Bus\n3. Bike\n");
            printf("Select subcategory: ");
            scanf("%d", &subcategory);

            switch (subcategory) {
                case 1: printf("\nClassification: Vehicle - Car");
                break;

                case 2: printf("\nClassification: Vehicle - Bus");
                break;

                case 3: printf("\nClassification: Vehicle - Bike");
                break;

                default: printf("\nInvalid subcategory");
            }
            break;

        // Subcategories for Food
        case 3:
            printf("\n1. Pizza\n2. Burger\n3. Biryani\n");
            printf("Select subcategory: ");
            scanf("%d", &subcategory);

            switch (subcategory) {
                case 1: printf("\nClassification: Food - Pizza");
                break;

                case 2: printf("\nClassification: Food - Burger");
                break;

                case 3: printf("\nClassification: Food - Biryani");
                break;

                default: printf("\nInvalid subcategory");
            }
            break;

        // Subcategories for Human
        case 4:
            printf("\n1. Male\n2. Female\n3. Child\n");
            printf("Select subcategory: ");
            scanf("%d", &subcategory);

            switch (subcategory) {
                case 1: printf("\nClassification: Human - Male");
                break;

                case 2: printf("\nClassification: Human - Female");
                break;

                case 3: printf("\nClassification: Human - Child");
                break;
                
                default: printf("\nInvalid subcategory");
            }
            break;

        default:
            printf("\nInvalid category");
    }

    return 0;
}