#include <stdio.h>

int main()
{
    char str[51];
    int arr[50];
    int i = 0;

    printf("Enter a number: ");
    scanf("%50s", str);

    while(str[i] != '\0')
    {
        arr[i] = str[i] - '0';
        i++;
    }

    printf("Integer Array:\n");

    for(int j = 0; j < i; j++)
    {
        printf("%d ", arr[j]);
    }
}
