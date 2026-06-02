#include <stdio.h>

void disp_rsum(int);

int main()
{
    int x;
    printf("enter the number :");
    scanf("%d", &x);

    disp_rsum(x);

    return 0;
}

void disp_rsum(int x)
{
    int i=x,sum=0;
    while(i>=1)
    {
        sum = sum + i ;
        i--;
    }printf("%d",sum);
}
