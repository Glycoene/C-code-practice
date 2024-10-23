#include <stdio.h>
#include <stdlib.h>

void D_to_B(int dec)
{
    if (dec / 2 != 0)
    {
        D_to_B(dec / 2);
    }
    printf("%d",dec % 2);
}

int main()
{
    int dec;
    printf("请输入要转化成二进制的十进制数：");
    scanf("%d",&dec);
    printf("该十进制数对应的二进制数为：");
    D_to_B(dec);
    printf("\n");

    system("pause");
    return 0;
}