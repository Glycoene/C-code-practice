#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int line = 0;
    printf("学习C语言\n");

    while (line < 2000)//当line小于2000时进入循环，大于等于2000时跳出循环
    {
        printf("写了%04d行代码\n",line);
        line = line + 1;//或者等价 line++;
    }

    if (line >= 2000)
    {
        printf("good boy!\n");
    }
    else
    {
        printf("继续加油！\n");
    }

    system("pause");
    return 0;
}