#include <stdio.h>

void disp_reverse_number(int);

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    disp_reverse_number(num);

    return 0;
}

void disp_reverse_number(int num)
{
    int rev = 0, digit;

    while(num != 0)
    {
        digit = num % 10;
        rev = rev * 10 + digit;
        num = num / 10;
    }

    printf("Reverse Number = %d", rev);
}

