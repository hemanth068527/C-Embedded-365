#include <stdio.h>

void disp_assend(int);

int main()
{
    int x;
    printf("enter the number :");
    scanf("%d", &x);

    disp_assend(x);

    return 0;
}

void disp_assend(int x)
{
    int i=1;
    while(i<=x)
    {
        printf("%d\n",i);
        i++;
    }
}
