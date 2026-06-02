#include <stdio.h>

void disp_2digit_even_sum6(int);

int main()
{
    int x;
    printf("enter the number :");
    scanf("%d", &x);

    disp_2digit_even_sum6(x);

    return 0;
}

void disp_2digit_even_sum6(int x)
{
    int i=10;
    while(i<=x)
    {
        if(((i/10)+(i%10))==6)
        printf("%d\n",i);
        i+=2;
    }
}

