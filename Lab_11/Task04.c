#include <stdio.h>

struct Address {
    char city[30];
    int zipCode;
    char state[30];
};

struct Student {
    int rollNo;
    char name[40];
    float cgpa;
    struct Address studentAddress;
};

int main() {
    struct Student student1 = {23, "Abdul Wasy Khanzada", 4.0, {"Karachi", 1234, "Sindh"}};

    printf("Roll No: %d\n", student1.rollNo);
    printf("Name: %s\n", student1.name);
    printf("CGPA: %.2f\n", student1.cgpa);
    printf("City: %s\n", student1.studentAddress.city);
    printf("Zip Code: %d\n", student1.studentAddress.zipCode);
    printf("State: %s\n", student1.studentAddress.state);

    return 0;
}
