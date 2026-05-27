#include<stdio.h>
int main()
{   int i = 11;

    while(i<100)
    {
        if((i%2!=0)&&((i/10)+(i%10))==7)
        printf("%d\n",i);
        i++ ;
    }
}
