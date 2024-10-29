#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x;
    printf("请输入x的值：");
    scanf("%f",&x);
    printf("f(x) = ");
    if (x < 1)
    {
        printf("%.2f\n",x);
    }
    else if (1 <= x && x < 10)
    {
        printf("%.2f\n",2*x-1);
    }
    else
    {
        printf("%.2f\n",3*x-11);
    }

    system("pause");
    return 0;
}