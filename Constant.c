#include <stdio.h>
#include <stdlib.h>

#define PI 3.14159			//定义常量

int main(void)
{
	int r = 3;

	//const int r = 3;			const关键字：被该关键字修饰的变量表示为只读变量

	float s = PI * r * r;
	float l = 2 * PI * r;

	printf("圆的周长为：%f\n", l);			//18.849541
	printf("圆的面积为：%f\n", s);			//28.274309

	//printf("圆的周长为：%.2f\n", l);			18.85			指定保留小数点后2位，并四舍五入
	//printf("圆的面积为：%.2f\n", s);			28.27			指定保留小数点后2位，并四舍五入

	system("pause");
	return 0;
}
//常量不能重新定义，只能定义一次