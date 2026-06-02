#include <stdio.h>

void disp_descend(int);

int main()
{
    int x;
    printf("enter the number :");
    scanf("%d", &x);

    disp_descend(x);

    return 0;
}

void disp_descend(int x)
{
    int i=x;
    while(i>=1)
    {
        printf("%d\n",i);
        i--;
    }
}

