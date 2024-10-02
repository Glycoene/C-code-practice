#include <stdio.h>

//typedef为类型定义，就是重命名，只能定义类型
typedef unsigned int uint;//将unsigned int类型重命名为uint

/*
一般内存分为三个区：
栈区：存放局部变量等
堆区：
静态区：存放静态变量等
*/

//static修饰局部变量时，本质上是将存储位置从栈区移动到了静态区，延长生命周期至整个程序的生命周期
//static修饰全局变量时，全局变量的外部链接属性会变成内部链接属性，其他源文件就不能使用这个全局变量
//static修饰函数时与修饰全局变量同理
void test1()
{
    int num1 = 0;
    num1++;
    printf("%d ",num1);
}

void test2()
{
    static int num2 = 0;//static作用于局部变量时，局部变量出了作用域不销毁
    num2++;
    printf("%d ",num2);
}

int main(void)
{
    unsigned int a = 0;
    uint b = 0;
    printf("a的大小为%lu\n",sizeof(a));
    printf("b的大小为%lu\n",sizeof(b));

    int c = 0;
    while (c<10)
    {
        test1();
        c++;
    }
    printf("\n");
    int d = 0;
    while (d<10)
    {
        test2();
        d++;
    }

    return 0;
}