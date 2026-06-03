#include <stdio.h>

int disp_biggest_4digit_div7_9(int);

int main()
{
    int x , y;
    printf("enter the number :");
    y = disp_biggest_4digit_div7_9(x);

    printf("%d", y);

    return 0;
}

int disp_biggest_4digit_div7_9(int y)
{
    for(y = 9999; y >= 1000; y--)
    {
        if(y % 7 == 0 && y % 9 == 0)
            return y;
    }
}
