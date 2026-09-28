/*
Name: Abdul Wasy
Roll No: 26K-0023
Program: BSAI
Section: 1A
Course: Programming Fundamentals Lab
Instructor: Ms. Ramsha Jatt
Task: AI Model Decision Engine
Dated: 27-09-2026
*/

#include <stdio.h>
#include <math.h>

int main() {
    float accuracy, confidence, modelScore;
    int datasetSize, role, status, permission;
    int deploymentPermission, ready;

    printf("===== AI Model Decision Engine =====\n");

    // Input model information
    printf("\nEnter model accuracy (%%): ");
    scanf("%f", &accuracy);

    printf("Enter confidence score (%%): ");
    scanf("%f", &confidence);

    printf("Enter dataset size: ");
    scanf("%d", &datasetSize);

    // User role
    printf("\n1. Admin\n");
    printf("2. Developer\n");
    printf("3. Researcher\n");
    printf("Select user role: ");
    scanf("%d", &role);

    // Model status
    printf("\n1. Ready\n");
    printf("2. Testing\n");
    printf("3. Training\n");
    printf("Select model status: ");
    scanf("%d", &status);

    // Permission input
    printf("\nEnter permission value (1=View, 2=Train, 4=Test, 8=Deploy): ");
    scanf("%d", &permission);

    // Calculate model score
    modelScore = (accuracy + confidence) / 2.0;

    // Check deployment permission using bitwise AND
    deploymentPermission = permission & 8;

    // Chacking if model is ready for deployment
    if (accuracy >= 80 && confidence >= 75) {

        if (datasetSize >= 1000 && status == 1) //Status == Ready
        {

            if (deploymentPermission) {
                ready = 1;
            }
            else {
                ready = 0;
            }

        }
        else {
            ready = 0;
        }

    }
    else {
        ready = 0;
    }

    // Displaying user role using switch-case
    printf("\n===== Model Information =====\n");

    printf("User Role: ");

    switch (role) {
        case 1:
            printf("Admin");
            break;

        case 2:
            printf("Developer");
            break;

        case 3:
            printf("Researcher");
            break;

        default:
            printf("Invalid Role");
    }

    // Displaying model status using nested switch-case (As per the task requirements otherwise not necessary to use nested switch statements)
    printf("\nModel Status: ");

    switch (role) {
        case 1:
            switch (status) {
                case 1: printf("Ready"); break;
                case 2: printf("Testing"); break;
                case 3: printf("Training"); break;
                default: printf("Invalid Status");
            }
            break;

        case 2:
            switch (status) {
                case 1: printf("Ready"); break;
                case 2: printf("Testing"); break;
                case 3: printf("Training"); break;
                default: printf("Invalid Status");
            }
            break;

        case 3:
            switch (status) {
                case 1: printf("Ready"); break;
                case 2: printf("Testing"); break;
                case 3: printf("Training"); break;
                default: printf("Invalid Status");
            }
            break;

        default:
            printf("Invalid Status");
    }

    printf("\nAccuracy: %.2f%%", accuracy);
    printf("\nConfidence: %.2f%%", confidence);
    printf("\nDataset Size: %d", datasetSize);
    printf("\nModel Score: %.2f", modelScore);

    printf("\nDeployment Permission: %s", deploymentPermission ? "Yes" : "No"); //Using Ternary Operators as per the task requirements

    printf("\nDeployment Status: %s", ready ? "READY FOR DEPLOYMENT" : "NOT READY FOR DEPLOYMENT");

    printf("\nSize of model score variable: %zu bytes", sizeof(modelScore));

    return 0;
}