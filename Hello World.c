#include <stdio.h>			//#为关键标识符，表示引入头文件；include表示引入头文件关键字；<>表示使用系统库函数（""表示使用用户自定义库函数）；stdio.h表示系统标准输入、输出库对应的头文件（在这为printf函数服务）
#include <stdlib.h>

int main(void)			//int表示函数返回值是整型数据；main为函数名，程序唯一的入口，必须有，且只能有一次；void表示函数调用无需传参
{			//{为函数体 起始位置
	printf("Hello World!\n");			//printf为函数名，表示将“hello world！”写到屏幕上；\n表示换行
	printf("你好世界!\n");
	system("pause");			//system为函数名，表示执行系统命令，如pause、cmd、clac、mspaint、notpad、cls
	return 0;			//返回当前函数调用（退出程序）；0的位置可换成与main函数返回值对应的值（一般用0表示程序正常结束）
}			//}为函数体 结束位置