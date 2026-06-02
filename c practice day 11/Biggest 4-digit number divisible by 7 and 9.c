#include <stdio.h>

void disp_biggest_4digit_div7_9(void);

int main()
{
    disp_biggest_4digit_div7_9();
    return 0;
}

void disp_biggest_4digit_div7_9(void)
{
    int num = 9999;

    while(num >= 1000)
    {
        if(num % 7 == 0 && num % 9 == 0)
        {
            printf("Biggest 4-digit number divisible by 7 and 9 = %d", num);
            break;
        }
        num--;
    }
}
