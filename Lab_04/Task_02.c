#include <stdio.h>
int main() {
    int score;

    printf("Enter confidence score (0-100): ");
    scanf("%d", &score);

    if (score < 0 || score > 100) {
        printf("Invalid Score\n");
    } else if (score <= 49) {
        printf("Low Confidence\n");
    } else if (score <= 79) {
        printf("Moderate Confidence\n");
    } else {
        printf("High Confidence\n");
    }

    return 0;
}
