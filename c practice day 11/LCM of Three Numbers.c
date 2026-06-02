#include <stdio.h>

void disp_LCM3(int, int, int);

int main()
{
    int a, b, c;

    printf("Enter three numbers: ");
    scanf("%d%d%d", &a, &b, &c);

    disp_LCM3(a, b, c);

    return 0;
}

void disp_LCM3(int a, int b, int c)
{
    int lcm, max;

    max = a;
    if(b > max)
        max = b;
    if(c > max)
        max = c;

    lcm = max;

    while(1)
    {
        if(lcm % a == 0 && lcm % b == 0 && lcm % c == 0)
        {
            printf("LCM = %d", lcm);
            break;
        }
        lcm++;
    }
}
