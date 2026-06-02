#include <stdio.h>

void disp_2digit_odd_sum7(int);

int main()
{
    int x;
    printf("enter the number :");
    scanf("%d", &x);

    disp_2digit_odd_sum7(x);

    return 0;
}

void disp_2digit_odd_sum7(int x)
{
    int i=11;
    while(i<=x)
    {
        if(((i/10)+(i%10))==7)
        printf("%d\n",i);
        i+=2;
    }
}
