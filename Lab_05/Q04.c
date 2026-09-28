/*
Name: Abdul Wasy
Roll No: 26K-0023
Program: BSAI
Section: 1A
Course: Programming Fundamentals Lab
Instructor: Ms. Ramsha Jatt
Task: A simple rule-based AI chatbot
Dated: 27-09-2026
*/

#include <stdio.h>

int main() {
    int category, choice;

    // Display chatbot categories
    printf("===== AI Chatbot =====\n");
    printf("1. Greeting\n");
    printf("2. Study\n");
    printf("3. Weather\n");
    printf("4. Help\n");

    // Input category
    printf("Select a category: ");
    scanf("%d", &category);

    // Select category
    switch (category) {

        case 1:
            // Greeting options
            printf("\n1. Hello\n");
            printf("2. How are you\n");
            printf("3. Goodbye\n");
            printf("Select: ");
            scanf("%d", &choice);

            // Greeting responses
            switch (choice) {
                case 1:
                    printf("\nHello! Nice to meet you.");
                    break;

                case 2:
                    printf("\nI'm doing well. How can I help you?");
                    break;

                case 3:
                    printf("\nGoodbye! Have a great day.");
                    break;

                default:
                    printf("\nInvalid option. Please try again.");
            }
            break;

        case 2:
            // Study options
            printf("\n1. Programming\n");
            printf("2. Mathematics\n");
            printf("3. AI\n");
            printf("Select: ");
            scanf("%d", &choice);

            // Study responses
            switch (choice) {
                case 1:
                    printf("\nProgramming is the process of creating software.");
                    break;

                case 2:
                    printf("\nMathematics is the study of numbers, shapes, and patterns.");
                    break;

                case 3:
                    printf("\nAI is the simulation of human intelligence in machines.");
                    break;

                default:
                    printf("\nInvalid option. Please try again.");
            }
            break;

        case 3:
            // Weather options
            printf("\n1. Today\n");
            printf("2. Tomorrow\n");
            printf("3. Forecast\n");
            printf("Select: ");
            scanf("%d", &choice);

            // Weather responses
            switch (choice) {
                case 1:
                    printf("\nToday's weather is as beautiful as your smile.");
                    break;

                case 2:
                    printf("\nTomorrow's weather is as bright as your future.");
                    break;

                case 3:
                    printf("\nThe weather forecast is as unpredictable as life itself.");
                    break;

                default:
                    printf("\nInvalid option. Please try again.");
            }
            break;

        case 4:
            // Help options
            printf("\n1. About Chatbot\n");
            printf("2. Commands\n");
            printf("3. Exit\n");
            printf("Select: ");
            scanf("%d", &choice);

            // Help responses
            switch (choice) {
                case 1:
                    printf("\nI am a simple rule-based AI chatbot.");
                    break;

                case 2:
                    printf("\nYou can select categories and sub-options to interact with me.");
                    break;

                case 3:
                    printf("\nExiting. Goodbye!");
                    break;

                default:
                    printf("\nInvalid option. Please try again.");
            }
            break;

        default:
            printf("\nInvalid option. Please try again.");
    }

    return 0;
}