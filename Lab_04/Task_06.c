#include <stdio.h>

int main() {
    int obstacle, person;
    float battery;

    printf("Obstacle detected? \n0. No \n1. Yes \nEnter: ");
    scanf("%d", &obstacle);

    printf("\nPerson detected? \n0. No \n1. Yes \nEnter: ");
    scanf("%d", &person);

    printf("\nEnter battery percentage: ");
    scanf("%f", &battery);

    if (obstacle == 1) {
        if (person == 1)
            printf("\nEmergency Stop\n");
        else
            printf("\nChange Direction\n");
    } else {
        if (battery < 20)
            printf("\nReturn to Charging Station\n");
        else
            printf("\nContinue Moving\n");
    }

    return 0;
}
