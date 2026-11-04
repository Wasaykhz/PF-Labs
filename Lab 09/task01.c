/*
Name: Abdul Wasy Khanzada
Course: Programming Fundamentals - Lab
Class: BSAI-1A
Dated: 2026-10-28
*/

#include <stdio.h>

/* Returns the discount amount in PKR */
float calculateDiscount(float amount, char type)
{
    float rate = 0.0;

    switch (type)
    {
        case 'P': case 'p': rate = 20.0; break;   /* Platinum */
        case 'G': case 'g': rate = 10.0; break;   /* Gold     */
        case 'S': case 's': rate = 5.0;  break;   /* Standard */
        default:  return -1;                      /* invalid membership type */
    }

    if (amount > 10000)
        rate += 2.0;                    /* additional 2% */

    return amount * rate / 100.0;
}

/* Applies 15% tax and shipping, returns total payable */
float calculateFinalBill(float discountedAmount)
{
    float tax = discountedAmount * 0.15;
    float shipping = (discountedAmount <= 5000) ? 300 : 0;

    return discountedAmount + tax + shipping;
}

int main()
{
    float amount, discount, discounted, total;
    char type;

    printf("Enter membership type (P = Platinum, G = Gold, S = Standard): ");
    scanf(" %c", &type);

    printf("Enter total shopping amount (PKR): ");
    scanf("%f", &amount);

    discount = calculateDiscount(amount, type);
    if (discount < 0)
    {
        printf("Invalid membership type!\n");
        return 1;
    }

    discounted = amount - discount;
    total = calculateFinalBill(discounted);

    printf("\n------ BILL ------\n");
    printf("Original Amount   : PKR %.2f\n", amount);
    printf("Discount          : PKR %.2f\n", discount);
    printf("Discounted Amount : PKR %.2f\n", discounted);
    printf("Sales Tax (15%%)   : PKR %.2f\n", discounted * 0.15);
    printf("Shipping          : PKR %.2f\n", (discounted <= 5000) ? 300.0 : 0.0);
    printf("Total Payable     : PKR %.2f\n", total);

    return 0;
}
