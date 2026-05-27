#include<stdio.h>
int main()
{   int i = 11,sum=0;

    while(i<100)
    {
        if(i%10==5)
        sum = sum + i ;
        i++ ;
    }printf("%d",sum);
}
