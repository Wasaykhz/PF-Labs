#include <stdio.h>

int main() {
    float dataUsed, pricePerGB;
    float basicCost, discountRate, discountAmount, finalCost;

    printf("Enter data used in GB: ");
    scanf("%f", &dataUsed);

    printf("Enter price per GB: ");
    scanf("%f", &pricePerGB);

    basicCost = dataUsed * pricePerGB;

    if (dataUsed < 50) {
        discountRate = 0.00;
    } else if (dataUsed < 100) {
        discountRate = 0.05;
    } else if (dataUsed < 200) {
        discountRate = 0.10;
    } else {
        discountRate = 0.15;
    }

    discountAmount = basicCost * discountRate;
    finalCost = basicCost - discountAmount;

    printf("\nBasic Cost: %.2f\n", basicCost);
    printf("Discount Amount: %.2f\n", discountAmount);
    printf("Final Cost: %.2f\n", finalCost);

    return 0;
}
