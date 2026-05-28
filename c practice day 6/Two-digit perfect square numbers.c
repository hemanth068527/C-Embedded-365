#include<stdio.h>

int main()
{
    int x, n, c = 0;

    printf("Enter number: ");
    scanf("%d", &x);

    while(x >= 10)
    {
        n = x % 100;

        if(n==16 || n==25 || n==36 || n==49 || n==64 || n==81)
        {
            c++;
        }

        x = x / 10;
    }

    printf("Count = %d", c);
}
