#include <stdio.h>

int main()
{
    int num, i = 1 ,factorial = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (i <= num)
    {
        factorial = factorial * i;
        i++;
    }

    printf("Factorial of %d = %d", num, factorial);
}
