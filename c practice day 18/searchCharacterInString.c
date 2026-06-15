#include <stdio.h>

void getdata(char *str, char *ch)
{
    printf("Enter String : ");
    scanf("%s", str);

    printf("Enter Character : ");
    scanf(" %c", ch);
}

void findpositions(char *str, char ch)
{
    int pos = 1;

    while (*str != '\0')
    {
        if (*str == ch)
        {
            printf("%d ", pos);
        }

        str++;
        pos++;
    }
}

void printresult(char *str, char ch)
{
    printf("Positions : ");
    findpositions(str, ch);
}

int main()
{
    char str[100];
    char ch;

    getdata(str, &ch);
    printresult(str, ch);

    return 0;
}
