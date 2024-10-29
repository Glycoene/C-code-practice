#include <stdio.h>
#include <stdlib.h>

int main()
{
    int score;
    while (1)
    {
        system("cls");
        printf("请输入成绩（满分100分）：");
        scanf("%d",&score);
        if (score < 0 || score > 100)
        {
            printf("输入数据错误，请重新输入\n");
            system("pause");
        }
        else
        {
            printf("你的等第为：");
            switch (score / 10)
            {
                case 9:
                    printf("A\n");
                    break;
                case 8:
                    printf("B\n");
                    break;
                case 7:
                    printf("C\n");
                    break;
                case 6:
                    printf("D\n");
                    break;
                default:
                    printf("E\n");
                    break;
            }
            break;
        }
    }

    system("pause");
    return 0;
}