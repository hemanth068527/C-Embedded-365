#include <stdio.h>

void disp_odd(int);

int main()
{
    int x;
    printf("enter the number :");
    scanf("%d", &x);

    disp_odd(x);

    return 0;
}

void disp_odd(int x)
{
    int i=1;
    while(i<=x)
    {
        printf("%d\n",i);
        i+=2;
    }
}
