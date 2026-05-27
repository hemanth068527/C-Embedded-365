#include<stdio.h>
int main()
{   int i = 11,sum=0;

    while(i<100)
    {
        if(((i%2)!=0)&&((i/10)==7))
        sum = sum + i ;
        i++ ;
    }printf("%d",sum);
}

