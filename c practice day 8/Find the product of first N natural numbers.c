#include <stdio.h>

int main()
{
    int n, i , product = 1;

    printf("Enter N: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        product *= i;
    }

    printf("Product of first %d natural numbers = %d", n, product);
}
