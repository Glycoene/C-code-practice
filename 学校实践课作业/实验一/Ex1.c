#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <math.h>

int main()
{
    float a, b, c;
    while (1)
    {
        system("cls");
        printf("请输入三角形的三条边长（中间用空格隔开）：");
        scanf("%f %f %f", &a, &b, &c);
        if (a + b < c || a + c < b || b + c < a)
        {
            printf("这三边不能组成三角形，请重新输入\n");
            Sleep(3000);
        }
        else
        {
            float s = (a + b + c) / 2;
            float area = sqrt(s*(s-a)*(s-b)*(s-c));
            printf("该三角形的面积为%.2f\n",area);
            break;
        }
    }
    system("pause");
    return 0;
}