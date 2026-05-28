#include<stdio.h>

int main()
{
    int x, count = 0;

    printf("Enter number: ");
    scanf("%d", &x);

    while(x >= 10)
    {
        if(((x % 100) % 2) != 0)
        {
            count++;
        }

        x = x / 10;
    }

    printf("%d", count);

    return 0;
}
