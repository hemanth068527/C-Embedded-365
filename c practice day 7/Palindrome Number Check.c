#include <stdio.h>

int main()
{
    int num, temp, rev = 0, digit;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;

    while(temp > 0)
    {
        digit = temp % 10;
        rev = rev * 10 + digit;
        temp = temp / 10;
    }

    if(num == rev)
        printf("Palindrome Number");
    else
        printf("Not a Palindrome Number");
}
