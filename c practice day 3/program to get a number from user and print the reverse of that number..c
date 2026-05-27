#include<stdio.h>

int main()
{
    int x, rev = 0;

    printf("Enter number: ");
    scanf("%d", &x);

    for( ; x > 0; x = x / 10)
    {
        rev = (rev * 10) + (x % 10);
    }

    printf("%d", rev);
}
