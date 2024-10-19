#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ans;
    again:
    printf("请输入正方形的边长：");
    scanf("%d",&ans);
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
    else
    {
        printf("无法生成\n");
        goto again;
    }

    system("pause");
    return 0;
}