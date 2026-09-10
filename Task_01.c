#include <stdio.h>
int main() {
    int a, b, c;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a == b && b == c) {
        printf("All three numbers are equal and greatest: %d\n", a);
    } else if (a == b && a > c) {
        printf("Two greatest numbers are equal: %d and %d\n", a, b);
    } else if (a == c && a > b) {
        printf("Two greatest numbers are equal: %d and %d\n", a, c);
    } else if (b == c && b > a) {
        printf("Two greatest numbers are equal: %d and %d\n", b, c);
    } else if (a > b && a > c) {
        printf("Greatest number: %d\n", a);
    } else if (b > a && b > c) {
        printf("Greatest number: %d\n", b);
    } else {
        printf("Greatest number: %d\n", c);
    }

    return 0;
}
