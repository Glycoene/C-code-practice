#include <stdio.h>

#define PI 3.1415926f    //define定义标识符常量
#define ADD(x , y) ((x)+(y))    //define定义宏
//      宏名(参数)   宏体
//          参数是无类型的

int main(void)
{
    printf("%.7f\n",PI);
    float pi = PI;
    printf("%.7f\n",pi);

    int a = 10;
    int b = 20;
    int c = ADD(a , b);//与函数不一样的是，宏会在预处理阶段被替换，这里替换成((a)+(b))
    printf("%d\n",c);

    return 0;
}