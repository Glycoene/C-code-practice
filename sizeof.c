#include <stdio.h>
#include <stdlib.h>

//sizeof不是函数，用来求一个变量、类型的大小

int main(void)
{
	int a = 10;			//格式匹配符为%d
	short b = 5;		//格式匹配符为%hd
	long c = 20;		//格式匹配符为%ld
	long long d = 30;		//格式匹配符为%lld

	//sizeof(变量名/类型名)

	printf("int大小为%d\n",sizeof(int));
	printf("short大小为%d\n",sizeof(short));
	printf("long 大小为%d\n",sizeof(long));
	printf("long long大小为%d\n",sizeof(long long));

	printf("------------------------------------------------------------------\n");

	unsigned int aa = 10;		//格式匹配符为%u
	unsigned short bb = 5;		//格式匹配符为%hu
	unsigned long cc = 20;		//格式匹配符为%lu
	unsigned long long dd = 30;		//格式匹配符为%llu

	//sizeof(变量名/类型名)

	printf("unsigned int大小为%d\n",sizeof(aa));
	printf("unsigned short大小为%d\n",sizeof(bb));
	printf("unsigned long 大小为%d\n",sizeof(cc));
	printf("unsigned long long大小为%d\n",sizeof(dd));

	printf("------------------------------------------------------------------\n");

	//sizeof的返回值为size_t
	//size_t是无符号整数，格式匹配符为%u

	size_t e = 100;
	printf("e = %u\n",e);

	system("pause");
	return 0;
}
/*
有符号整型signed，一般省略signed，表示矢量
有符号整型的定义为(signed) int 名 = 值

无符号整型unsigned，表示标量
无符号整型的定义为unsigned int 名 = 值

禁止使用关键字和系统函数作为标识符名称
*/ 