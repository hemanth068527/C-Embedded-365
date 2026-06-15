#include <stdio.h>
#include <string.h>

void getnumbers(char *num1, char *num2)
{
    printf("Enter the first number :");
    scanf("%50s", num1);
    printf("Enter the second number :");
    scanf("%50s", num2);
}

void multiplynumbers(char *num1, char *num2, char *result)
{
    int len1 = strlen(num1);
    int len2 = strlen(num2);

    int temp[101] = {0};

    int i, j;

    for(i = len1 - 1; i >= 0; i--)
    {
        for(j = len2 - 1; j >= 0; j--)
        {
            int mul = (num1[i] - '0') * (num2[j] - '0');

            int p1 = i + j;
            int p2 = i + j + 1;

            int sum = mul + temp[p2];

            temp[p2] = sum % 10;
            temp[p1] += sum / 10;
        }
    }

    int k = 0;
    int start = 0;

    while(start < len1 + len2 && temp[start] == 0)
        start++;

    if(start == len1 + len2)
    {
        result[k++] = '0';
    }
    else
    {
        while(start < len1 + len2)
        {
            result[k++] = temp[start++] + '0';
        }
    }

    result[k] = '\0';
}

void print(char *result)
{
    printf("%s\n", result);
}

int main()
{
    char number1[51];
    char number2[51];
    char result[101];

    getnumbers(number1, number2);
    multiplynumbers(number1, number2, result);
    print(result);

    return 0;
}
