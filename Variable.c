#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a = 40;			//变量定义

	//int a;			变量声明

	//extern int a;			变量声明，但是不允许提升为变量定义

	//当编译器编译程序时，在变量使用前，必须看到变量定义，如果没有看到变量定义，编译器会自动寻找一个变量声明提成为定义
	//定义变量时，尽量不要重名

	a = 56;			//变量赋值、变量使用

	printf("a = %d\n",a);

	system("pause");
	return 0;
}
