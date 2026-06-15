#include <stdio.h>

void getstring(char *str)
{
    printf("Enter String : ");
    gets(str);
}

int countwords(char *str)
{
    int count = 0;

    while (*str)
    {
        if (*str != ' ' && (*(str + 1) == ' ' || *(str + 1) == '\0'))
        {
            count++;
        }

        str++;
    }

    return count;
}

void printresult(int count)
{
    printf("Word Count : %d", count);
}

int main()
{
    char str[100];
    int count;

    getstring(str);
    count = countwords(str);
    printresult(count);

    return 0;
}
