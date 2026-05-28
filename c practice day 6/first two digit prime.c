#include<stdio.h>

int main()
{
    int x, n, i = 1, c = 0;

    printf("Enter number: ");
    scanf("%d", &x);

    n = x / 100;

    while(i <= n)
    {
        if(n % i == 0)
            c++;

        i++;
    }

    if(c == 2)
        printf("Prime");
    else
        printf("Not Prime");
}
