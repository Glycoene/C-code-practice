#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//  返回类型 函数名(函数参数)
//  {
//    函数体
//  }
float add(float x, float y);// 函数的声明
// 函数的定义
float add(float x, float y)//自己写的函数add,可重复调用，免去写重复代码的麻烦
{
    float z = 0;
    z = x + y;
    return z;
}
// 函数可以嵌套使用，但是不能在函数中定义另一个函数

int main(void)
{
    float num1 = 0;
    float num2 = 0;
    scanf("%f %f",&num1,&num2);
    float sum = add(num1,num2);//调用自己写的函数add,num1对应x,num2对应y
    printf("%f\n",sum); 

    // 链式访问
    printf("%d\n",strlen("abcdef"));
    printf("%d",printf("%d",printf("43")));// printf会返回打印字符的个数

    system("pause");
    return 0;
}
/*
    一般将函数的声明放在 .h头文件 中，函数的定义放在 .c源文件 中
    这样可以将代码分类，在代码量大时方便管理

    再将 .c源文件 编译成 .lib静态库文件
    可以将源文件加密，但是 头文件 可以提示别人你写的函数怎么用
    只需将 头文件 和 静态库文件 打包发给别人
    导入静态库文件：#pragma comment (lib, "用户自定义静态库名.lib")
                                    ^                       ^    这两个下标对应文件扩展名，可更改导入文件类型
    导入头文件：#include "用户自定义头文件名.h"
    就可以让别人用你的函数，而别人无法知道函数是怎么实现的

    但是有反编译的方法
    防君子不防小人
*/