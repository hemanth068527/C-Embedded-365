#include <stdio.h>

void disp_sum(int);

int main()
{
    int x;
    printf("enter the number :");
    scanf("%d", &x);

    disp_sum(x);

    return 0;
}

void disp_sum(int x)
{
    int i=1,sum=0;
    while(i<=x)
    {
        sum = sum + i ;
        i++;
    }printf("%d",sum);
}
