#include <stdio.h>

int main() {
    char name[100];
    int age;
    float height, cgpa;
    char grade;

    printf("Enter student name: ");
    scanf(" %[^\n]c", name);

    printf("Enter age: ");
    scanf("%d", &age);

    printf("Enter height: ");
    scanf("%f", &height);

    printf("Enter grade: ");
    scanf(" %c", &grade);

    printf("Enter CGPA: ");
    scanf("%f", &cgpa);

    printf("\n========== STUDENT REPORT ==========\n");
    printf("Name : %s\n", name);
    printf("Age : %d\n", age);
    printf("Height : %.2f\n", height);
    printf("Grade : %c\n", grade);
    printf("CGPA : %.2f\n", cgpa);

    return 0;
}