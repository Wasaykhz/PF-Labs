#include <stdio.h>

int main() {
    float temperature;

    printf("Enter temperature: ");
    scanf("%f", &temperature);

    printf("Temperature: %.2f C", temperature);

    return 0;
}