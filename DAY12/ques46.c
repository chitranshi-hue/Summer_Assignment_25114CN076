#include <stdio.h>

int isArmstrong(int num)
{
    int original = num, digit, sum = 0;

    while (num > 0)
    {
        digit = num % 10;
        sum += digit * digit * digit;
        num /= 10;
    }

    return (sum == original);
}

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (isArmstrong(n))
        printf("%d is an Armstrong number.\n", n);
    else
        printf("%d is not an Armstrong number.\n", n);

    return 0;
}