#include <stdio.h>

int main(void)
{
    int arr[5];
    scanf("%1d%1d%1d%1d%1d",&arr[0],&arr[1],&arr[2],&arr[3],&arr[4]);
    int a = 4;
    while (a >= 0)
    {
        printf("%d",arr[a]);
        a--;
    }
    printf("\n");

    return 0;
}