#include <stdio.h>

int disp_reverse_number(int);

int main()
{
    int x, y;
    printf("enter the number :");
    scanf("%d", &x);

    y = disp_reverse_number(x);

    printf("%d", y);

    return 0;
}

int disp_reverse_number(int y)
{
    int x,digit = 0;

    while(y != 0)
    {
        x=y%10;
        digit = digit*10 + x ;
        y/=10;
    }

    return digit;
}


