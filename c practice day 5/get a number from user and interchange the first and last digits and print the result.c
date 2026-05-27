#include<stdio.h>

int main()
{
    int x,y,z,c=1,m;

    printf("Enter number: ");
    scanf("%d", &x);
    y=x;
    z=x%10;

    while(y>=10)
    {
        y /= 10;
        c *= 10;
    }
    m = (x%c)/10;
    printf("%d", (z*c)+(m*10)+y);
}




