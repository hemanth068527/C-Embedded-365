#include <stdio.h>

int main()
{
    int num, temp, i = 0, j;
    char str[20];
    printf("enter the number :");
    scanf("%d", &num);

    temp = num;

    while(temp > 0)
    {
        str[i] = (temp % 10) + '0';
        temp = temp / 10;
        i++;
    }

    str[i] = '\0';

    for(j = 0; j < i / 2; j++)
    {
        char t = str[j];
        str[j] = str[i - 1 - j];
        str[i - 1 - j] = t;
    }

    printf("%s", str);
}
