#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    unsigned int ans;
    printf("请输入正方形的边长：");
    scanf("%u",&ans);
    if (ans >= 1)
    {
        for (int i = 0; i < ans; i++)
        {
            printf("* ");
        }
        printf("\n");
        for (int i = 0; i < ans-2; i++)
        {
            printf("* ");
            for (int j = 0; j < ans-2; j++)
            {
                printf("  ");
            }
            printf("* \n");
        }
        for (int i = 0; i < ans; i++)
        {
            printf("* ");
        }
        printf("\n");
    }

    system("pause");
    return 0;
}