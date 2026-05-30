#include <stdio.h>

int main()
{
    int a, b, result = 1, i = 1;

    printf("Enter the base (a): ");
    scanf("%d", &a);

    printf("Enter the exponent (b): ");
    scanf("%d", &b);

    while(i <= b)
    {
        result = result * a;
        i++;
    }

    printf("%d^%d = %d", a, b, result);
}
