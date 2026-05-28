#include<stdio.h>

int main()
{
    int x, c = 0;

    printf("Enter number: ");
    scanf("%d", &x);

    while(x > 0)
    {
        if((x % 10) % 2 != 0)
        {
            c++;
        }

        x = x / 10;
    }

    printf("Total odd digits = %d", c);
}
