#include <stdio.h>
#include <stdlib.h>

#define PI 3.14

int main()
{
    float r, h;
    printf("请输入半径和高（用空格隔开）：");
    scanf("%f %f",&r, &h);
    float circle = 2 * PI * r;
    float area = PI * r * r;
    float surface = 4 * PI * r * r;
    float globle = PI * r * r * r * 4 / 3;
    float column = area * h;
    printf("圆周长：%.2f\n圆面积：%.2f\n圆球表面积：%.2f\n圆球体积：%.2f\n圆柱体积：%.2f\n",circle, area, surface, globle, column);

    system("pause");
    return 0;
}