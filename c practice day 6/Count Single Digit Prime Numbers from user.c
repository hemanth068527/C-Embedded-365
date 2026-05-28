#include<stdio.h>

int main()
{
    int x, d, c = 0;

    printf("Enter number: ");
    scanf("%d", &x);

    while(x > 0)
    {
        d = x % 10;

        if(d == 2 || d == 3 || d == 5 || d == 7)
            c++;

        x = x / 10;
    }

    printf("%d", c);

    return 0;
}
