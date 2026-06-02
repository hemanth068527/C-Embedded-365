#include <stdio.h>

void disp_count_sum14(void);

int main()
{
    disp_count_sum14();
    return 0;
}

void disp_count_sum14(void)
{
    int num, temp, digit, sum;
    int count = 0;

    for(num = 0; num < 100000; num++)
    {
        temp = num;
        sum = 0;

        while(temp != 0)
        {
            digit = temp % 10;
            sum = sum + digit;
            temp = temp / 10;
        }

        if(sum == 14)
            count++;
    }

    printf("Total count = %d", count);
}
