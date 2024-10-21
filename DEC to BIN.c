#include <stdio.h>
#include <stdlib.h>

int D_to_B(int dec)
{
    if (dec / 2 == 0)
    {
        return 1;
    }
    printf("%d",D_to_B(dec / 2));
    return dec % 2;
}

int main()
{
    int dec;
    printf("请输入要转化成二进制的十进制数：");
    scanf("%d",&dec);
    printf("该十进制数对应的二进制数为：");
    printf("%d\n",D_to_B(dec));

    system("pause");
    return 0;
}