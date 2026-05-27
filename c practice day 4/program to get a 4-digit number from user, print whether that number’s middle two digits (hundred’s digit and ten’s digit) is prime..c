#include<stdio.h>

int main()
{
    int x, y, i, c = 0;

    printf("Enter 4-digit number: ");
    scanf("%d", &x);

    y = (x / 10) % 100;   // middle two digits

    for(i = 1; i <= y; i++)
    {
        if(y % i == 0)
            c++;
    }

    if(c == 2)
        printf("Prime");
    else
        printf("Not Prime");

    return 0;
}
