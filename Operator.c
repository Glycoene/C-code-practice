#include <stdio.h>
#include <stdlib.h>

int add(int x,int y)
{
    return x+y;
}

int main(void)
{
    //算术操作符：+ - * / %

    int a = 7 / 2;//取商
    int b = 7 % 2;//取余
    printf("%d\n",a);
    printf("%d\n",b);

    //除号'/'的两端都是整数的时候，执行整数除法，得到商数和余数，如果两端只要有一个浮点数，就执行浮点数除法，得到浮点数
    //取余'%'的两端只能是整数

    float c = 7 / 2.0;
    printf("%.1f\n",c);

    //移位操作符：>> << 涉及二进制运算,目前不用理解

    //位操作符：& ^ | 目前不用理解

    //赋值操作符：= += -= *= /= &= ^= |= >>= <<=

    int d = 0;//初始化
    d = 20;//
    d = d + 3;//等价d += 3
    d = d - 3;//等价d -= 3
    //*= /= &= ^= |= >>= <<=同理

    /*
    单目操作符：只有一个操作数的操作符
    !           逻辑反操作
    -           负值
    +           正值
    &           取地址
    sizeof      操作数的类型长度（以字节Byte为单位）
    ~           对一个数的二进制 按位 取反
    --          前置、后置--
    ++          前置、后置++
    *           间接访问操作符（解引用操作符）
    (类型)      强制类型转换
    */

    //C语言中，0表示假，非0表示真
    int e = 0;
    if (!e)//!的作用是将真变成假，把假变成真
    {
        printf("hehe\n");
    }

    int f = -10;
    int g = -f;//-f = -(-10)，+f = +(-10)
    printf("%d\n",g);

    //sizeof不是函数，是单目操作符
    int h = 10;
    printf("%d\n",sizeof(h));
    printf("%d\n",sizeof(int));
    int arr1[10] = {0,1,2,3,4,5,6,7,8,9};
    printf("%d\n",sizeof(arr1));//求数组arr1的大小
    printf("%d\n",sizeof(arr1[0]));//求数组arr1中0号位的大小
    printf("%d\n",sizeof(arr1)/sizeof(arr1[0]));//数组arr1的大小 除以 数组arr1中0号位的大小 = 数组的元素个数

    int i = 10;
    int j = i++;//后置++，先使用，后++，等价int j = i; i = i + 1; --同理
        j = ++i;//前置++，先++，后使用，等价i = i + 1; j = i; --同理
    printf("%d\n",i);
    printf("%d\n",j);

    int k = (int)3.14;//3.14为字面浮点数，编译器默认为double类型，(int)将3.14强制转化成整型，否则会报错
    printf("%d\n",k);

    /*
    关系操作符：
    >       大于
    >=      大于等于
    <       小于
    <=      小于等于
    !=      不等于
    ==      等于，一个‘=’是赋值，两个‘=’才是等于
    */

    int l = 10;
    if (l == 3)//当括号里为‘l = 3’时为赋值，括号内为真，会打印呵呵；当括号里为‘l == 3’时，l为10不满足条件，不打印hehe
    {
        printf("hehe\n");
    }

    /*
    逻辑操作符：
    &&      逻辑 与
    ||      逻辑 或
    */

    int m = 10;
    int n = 20;
    if (m == 10 && n == 20)//m等于10并且n等于20时才会打印hehe
    {
        printf("hehe\n");
    }
    if (m == 10 || n == 10)//m等于10或者n等于10或者m和n都等于10时都会打印hehe
    {
        printf("hehe\n");
    }

    /*
    条件操作符（三目操作符）：
    exp1 ? exp2 : exp3      exp意为表达式
    如果exp1为真，取exp2的值，不取exp3的值，整个表达式的结果为exp2的结果
    如果exp1为假，不取exp2的值，取exp3的值，整个表达式的结果为exp3的结果
    */

    int o = 10;
    int p = 20;
    int q = o > p ? o : p;//判断o是否大于p，如果大于则为真，将o的值赋值给q；如果小于则为假，将p的值赋值给q
    printf("%d\n",q);

    /*
    逗号表达式：用逗号隔开的一串表达式
    (exp1,exp2,exp3,...,expn)
    从左向右依次计算，整个表达式的结果就是最后一个表达式的结果
    */

    int r = 10;
    int s = 20;
    int t = 0;
    int u = (t=r-2,r=s+t,t-3);
    //       t=8   r=28   5
    printf("%d\n",u);//u = 5

    //下标引用操作符：[]

    int arr[5] = {1,2,3,4,5};
    arr[3] = 10;//[3]引用了数组arr中的‘4’的位置
    printf("%d\n",arr[3]);

    //函数调用操作符：()

    int sum = add(2 , 3);//调用函数add（详见行4），()内为传参，不能没有()
    printf("%d\n",sum);

    system("pause");
    return 0;
}