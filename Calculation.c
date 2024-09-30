#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a = 3;			//定义 整型变量 a,赋值3
	int b = 5;			//定义 整型变量 b,赋值5
	int c;			//定义 整型变量 c,不赋值

	c = a + b;			//将a+b的结果赋值给c

	printf("%d\n",c);			//%d为格式匹配符,匹配整型数据

	printf("c = %d\n",c);

	printf("%d + %d = %d\n",a,b,c);

	printf("%d + %d = %d\n",a,b,a + b);

	system ("pause");
	return 0;
}