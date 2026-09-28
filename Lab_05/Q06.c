/*
Name: Abdul Wasy
Roll No: 26K-0023
Program: BSAI
Section: 1A
Course: Programming Fundamentals Lab
Instructor: Ms. Ramsha Jatt
Task: AI Model Selection System
Dated: 27-09-2026
*/


#include <stdio.h>
int main() {
    int problem_type, algorithm;

    // Asking user for problem type
    printf("===== AI Model Selection System =====\n");
    printf("1. Classification\n");
    printf("2. Regression\n");
    printf("3. Clustering\n");
    printf("4. Computer Vision\n");
    printf("Enter your prolem type: ");
    scanf("%d", &problem_type);

    // Algorithms for selected problem type
    switch (problem_type)
    {
    case 1:
        // Algorithms for Classification
        printf("\n1. Logistic Regression\n");
        printf("2. Decision Tree\n");
        printf("3. KNN\n");
        printf("Enter Algorithm: ");
        scanf("%d", &algorithm);

        switch (algorithm)
        {
        case 1:
            printf("\nSelected: Logistic Regression\n");
            break;

        case 2:
            printf("\nSelected: Decision Tree\n");
            break;

        case 3:
            printf("\nSelected: KNN\n");
            break;
        
        default:
            printf("\nInvalid Algorithm\n");
            break;
        }
        break;
    
    case 2:
        // Algorithms for Regression
        printf("\n1. Linear Regression\n");
        printf("2. Polynomial Regression\n");
        printf("3. SVR\n");
        printf("Enter Algorithm: ");
        scanf("%d", &algorithm);

        switch (algorithm)
        {
        case 1:
            printf("\nSelected: Linear Regression\n");
            break;

        case 2:
            printf("\nSelected: Polynomial Regression\n");
            break;

        case 3:
            printf("\nSelected: SVR\n");
            break;
        
        default:
            printf("\nInvalid Algorithm\n");
            break;
        }
        break;

    case 3:
        // Algorithms for Clustering
        printf("\n1. K-Means\n");
        printf("2. Hierarchical Clustering\n");
        printf("3. DBSCAN\n");
        printf("Enter Algorithm: ");
        scanf("%d", &algorithm);

        switch (algorithm)
        {
        case 1:
            printf("\nSelected: K-Means\n");
            break;

        case 2:
            printf("\nSelected: Hierarchical Clustering\n");
            break;

        case 3:
            printf("\nSelected: DBSCAN\n");
            break;
        
        default:
            printf("\nInvalid Algorithm\n");
            break;
        }
        break;

    case 4:
        // Algorithms for Computer Vision
        printf("\n1. CNN\n");
        printf("2. YOLO\n");
        printf("3. R-CNN\n");
        printf("Enter Algorithm: ");
        scanf("%d", &algorithm);

        switch (algorithm)
        {
        case 1:
            printf("\nSelected: CNN\n");
            break;

        case 2:
            printf("\nSelected: YOLO\n");
            break;

        case 3:
            printf("\nSelected: R-CNN\n");
            break;
        
        default:
            printf("\nInvalid Algorithm\n");
            break;
        }
        break;

    default:
        printf("\nInvalid Problem Type\n");
        break;
    }

    return 0;
}