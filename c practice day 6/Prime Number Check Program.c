#include<stdio.h>

int main()
{
    int x, i = 1, c = 0;

    printf("Enter number: ");
    scanf("%d", &x);

    while(i <= x)
    {
        if(x % i == 0)
            c++;

        i++;
    }

    if(c == 2)
        printf("Prime");
    else
        printf("Not Prime");

    return 0;
}
