#include <stdio.h>

void disp_2digit_ones5(int);

int main()
{
    int x;
    printf("enter the number :");
    scanf("%d", &x);

    disp_2digit_ones5(x);

    return 0;
}

void disp_2digit_ones5(int x)
{
    int i=10,sum = 0;
    while(i<=x)
    {
        if((i%10)==5)
        sum = sum + i ;
        i++;
    }printf("%d\n",sum);
}


