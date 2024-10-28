#include <stdio.h>
#include <stdlib.h>

int main()
{
    float c;
    printf("请输入要转换成华氏度的摄氏度：");
    scanf("%f",&c);
    float f = 9 * c / 5 + 32;
    printf("转换成华氏温度为：%.2f\n",f);

    system("pause");
    return 0;
}