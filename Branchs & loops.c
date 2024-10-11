#include <stdio.h>
#include <stdlib.h>

// C语言中语句可分为以下五类
// 表达式语句
// 函数调用语句
// 控制语句：用于控制程序的执行流程，以实现程序的各种结构方式，由特定的语句定义符组成，C语言有9种控制语句
// 复合语句
// 空语句

// 控制语句
// 条件判断语句也叫分支语句：if语句、switch语句
// 循环执行语句：do while语句、while语句、for语句
// 转向语句：break语句、goto语句、continue语句、return语句

int test()
{
    int a = 4;
    if (a == 4)// return可以结束函数调用，不会同时返回两个数
    {
        return 1;
    }
    return 0;
}

int main(void)
{
    int a = 10;

    // 单分支
    if (a == 10)
        printf("hehe\n");

    unsigned int age;
    scanf("%u",&age);

    // 双分支
    if (age < 18)// 默认if、else if、else语句后只能跟一条语句，多条语句需用{},习惯无论跟几条语句都用{}
    {
        printf("未成年\n");
        printf("不能饮酒\n");
    }
    else
        printf("成年\n");

    // 多分支
    if (age>=0 && age<12)
    {
        printf("儿童\n");
    }
    else if (age>=12 && age<18)
    {
        printf("青少年\n");
    }
    else if (age>=18 && age<28)
    {
        printf("青年\n");
    }
    else if (age>=28 && age<40)
    {
        printf("壮年\n");
    }
    else if (age>=40 && age <60)
    {
        printf("中年\n");
    }
    else if (age>=60 && age<100)
    {
        printf("老年\n");
    }
    else
    {
        printf("老寿星\n");
    }

    int b = test();
    printf("%d\n",b);

    // switch语句
    // 常用于多分支的情况,允许嵌套使用

    // switch (整型表达式)
    // {
    //     case (整型常量1):    case决定入口
    //         语句；           语句可加可不加，不加语句时可实现多个入口匹配同一组语句(line 107~108、111~112)
    //         break;          break跳出switch语句，可加可不加，不加时继续向下按顺序执行其他case中的语句(line 100~101)
    //     case (整型常量2):
    //         语句;
    //         break;
    //     ......
    //     case (整型常量n):
    //         语句;
    //         break;
    //     default:             default表示除case列举出来的以外的情况，相当于else
    //         语句;
    //         break;
    // }
    int day;
    scanf("%d",&day);
    switch (day)
    {
        case 1:
            printf("周一\n");
        case 2:
            printf("周二\n");
            break;
        case 3:
            printf("周三\n");
            break;
        case 4:
        case 5:
            printf("工作日\n");
            break;
        case 6:
        case 7:
            printf("休息日\n");
            break;
        default:
            printf("选择错误\n");
            break;
    }
    
    // while循环
    int c = 1;// 初始化
    while (c <= 10)// 条件判断
    {
        if (c == 5)
        {
            break;// break为跳出整个循环，只会作用于whlie循环，对于if语句没有意义
        }
        printf("%d\n",c);
        c++;// 调整
    }

    c = 1;// 初始化

    while (c <= 10)// 条件判断
    {
        c++;// 调整
        if (c == 5)
        {
            continue;// continue为继续执行循环，会跳过之后的代码直接判断是否执行下一次循环
        }
        printf("%d\n",c);
    }
    // 有时while循环中的初始化语句、条件判断语句、调整语句会离得很远，调整起来比较麻烦
    // 此时可以用for循环

    // for循环
    // for (初始化表达式;条件判断表达式;调整表达式)
    // {
    //     循环语句;
    // }
    // 执行顺序为：初始化 -> 条件判断 -> 循环语句 -> 调整 -> 循环
    // for循环是最常用的循环
    for (c = 1; c <= 10; c++)
    {
        if (c == 5)
        {
            break;// break为跳出整个循环，与在while循环中作用相同
        }
        printf("%d\n",c);
    }

    for (c = 1; c <= 10; c++)
    {
        if (c == 5)
        {
            continue;// continue为继续执行循环，与在while循环中不同的是，在while循环中会跳过之后的所有循环语句包括调整语句，而在for循环中会直接跳转到调整表达式
        }
        printf("%d\n",c);
    }

    for (;;)// 当条件判断省略，意味着判断恒成立
    {
        printf("hehe\n");
        break;
    }
    // 初始化、条件判断、调整都可省略，不过要考虑后果

    int x,y;
    for (x = 0, y = 0;x < 2 && y < 5;++x, y++)// 用多个变量控制循环
    {
        printf("hehe\n");
    }

    // do-while循环
    // do
    // {
    //     循环语句;
    // } while (条件判断表达式);
    // 循环至少执行一次，使用场景有限，所以不经常使用
    int d = 1;
    do
    {
        if (d == 5)
        {
            break;// break为跳出整个循环，只会作用于do-whlie循环，对于if语句没有意义
        }
        printf("%d\n",d);
        d++;
    } while (d <= 10);

    int d = 1;
    do
    {
        if (d == 5)
        {
            continue;// continue为继续执行循环，会跳过之后的代码直接判断是否执行下一次循环
        }
        printf("%d\n",d);
        d++;
    } while (d <= 10);

    // 三种循环用的最多的是for，其次是while，最少的是do-while

    system("pause");
    return 0;
}