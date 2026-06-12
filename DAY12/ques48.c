#include <stdio.h>

int isPerfect(int num)
{
    int i, sum = 0;

    for (i = 1; i <= num / 2; i++)
    {
        if (num % i == 0)
            sum += i;
    }

    return (sum == num);
}

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (isPerfect(n))
        printf("%d is a Perfect Number.\n", n);
    else
        printf("%d is not a Perfect Number.\n", n);

    return 0;
}