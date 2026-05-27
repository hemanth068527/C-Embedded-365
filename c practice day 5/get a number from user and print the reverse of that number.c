#include<stdio.h>

int main()
{
    int x,c=0;

    printf("Enter number: ");
    scanf("%d", &x);

    while(x>0)
    {
        c = c*10 + x % 10;
        x /= 10;
    }

    printf("%d", c);
}



