#include<stdio.h>
int main()
{   int x,c=1;
    printf("enter the number :");
    scanf("%d",&x);

    while(x>=10)
    {
        x/=10 ;
        c++ ;
    }printf("%d",c);
}


