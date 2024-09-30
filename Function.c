#include <stdio.h>
#include <stdlib.h>

//  返回类型 函数名(函数参数)
//  {
//    函数体
//  }
float add(float x,float y)//自己写的函数add,可重复调用，免去写重复代码的麻烦
{
    float z = 0;
    z = x + y;
    return z;
}

int main(void)
{
    float num1 = 0;
    float num2 = 0;
    scanf("%f %f",&num1,&num2);
    float sum = add(num1,num2);//调用自己写的函数add,num1对应x,num2对应y
    printf("%f\n",sum); 

    system("pause");
    return 0;
}