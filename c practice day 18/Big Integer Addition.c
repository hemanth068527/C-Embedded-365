#include <stdio.h>
#include <string.h>

void getnumbers(char *num1, char *num2)
{
    printf("Enter the first number :");
    scanf("%50s", num1);
    printf("Enter the second number :");
    scanf("%50s", num2);
}

void addnumbers(char *num1, char *num2, char *result)
{
    char *p1 = num1 + strlen(num1) - 1;
    char *p2 = num2 + strlen(num2) - 1;
    char *pr = result;

    int carry = 0, sum;

    while (p1 >= num1 || p2 >= num2 || carry)
    {
        sum = carry;

        if (p1 >= num1)
            sum += *p1-- - '0';

        if (p2 >= num2)
            sum += *p2-- - '0';

        *pr++ = (sum % 10) + '0';
        carry = sum / 10;
    }

    *pr = '\0';
    char *start = result;
    char *end = result + strlen(result) - 1;

    while (start < end)
    {
        char temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
}

void print(char *result)
{
    printf("%s\n", result);
}

int main()
{
    char number1[51];
    char number2[51];
    char result[52];

    getnumbers(number1, number2);
    addnumbers(number1, number2, result);
    print(result);

    return 0;
}
