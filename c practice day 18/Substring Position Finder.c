#include <stdio.h>

void getstrings(char *mainstr, char *substr)
{
    printf("Enter Main String : ");
    scanf("%s", mainstr);

    printf("Enter Sub String : ");
    scanf("%s", substr);
}

int findposition(char *mainstr, char *substr)
{
    int pos = 1;

    while (*mainstr)
    {
        char *m = mainstr;
        char *s = substr;

        while (*m && *s && (*m == *s))
        {
            m++;
            s++;
        }

        if (*s == '\0')
            return pos;

        mainstr++;
        pos++;
    }

    return -1;
}

void printresult(int position)
{
    if (position == -1)
        printf("Substring not found\n");
    else
        printf("Position : %d\n", position);
}

int main()
{
    char mainstr[100];
    char substr[100];
    int position;

    getstrings(mainstr, substr);
    position = findposition(mainstr, substr);
    printresult(position);

    return 0;
}
