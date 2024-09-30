#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    enum answer{Y,N};//创建名为answer枚举常量，表示变量可能的值

    enum answer input;//创建变量值只能为answer枚举常量中的值的变量
    //char input;
    printf("要好好学习吗？(Y/N)\n");
    scanf("%c",&input);
    if (input == 'Y')//如果
    {
        printf("good boy!");
    }
    else//否则(其他)
    {
        printf("bad boy!");
    }

    system("pause");
    return 0;
}