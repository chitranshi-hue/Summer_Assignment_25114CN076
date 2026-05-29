#include <stdio.h>

int main()
 {
    int n, i, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    for(i = 1; i <= n; i++)
     {
        sum = sum + i;
    }

    // Display the result
    printf("Sum of first %d natural numbers = %d\n", n, sum);

    return 0;
}