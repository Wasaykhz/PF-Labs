#include <stdio.h>
int main() {
    int n,
        fact_2n = 1,
        fact_n = 1,
        temp = 1,
        cat_no = 1;

    printf("Enter Term No for catalan Series: ");
    scanf("%d", &n);

    for (int i = 1; i <= n*2; i++)  // Factorial of 2n
    {
        fact_2n *= i;
    }
    
    for (int i = 1; i <= n; i++)    // Factorial of n
    {
        fact_n *= i;
    }

    temp = fact_n * (n+1);          // Factorial of n+1
    cat_no = fact_2n / (fact_n * temp);   //nth catalan no.

    printf("%dth catalan no is %d.", n, cat_no);
    return 0;
}