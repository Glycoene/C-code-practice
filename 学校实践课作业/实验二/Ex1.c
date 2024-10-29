#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    int b;
    int c;
    int max;
    printf("请输入三个整数（中间用空格隔开）：");
    scanf("%d %d %d", &a, &b, &c);
    if (a > b)
    {
        max = a;
    }
    else
    {
        max = b;
        if (c > max)
        {
            max = c;
        }
    }
    printf("最大值为：%d\n",max);

    system("pause");
    return 0;
}