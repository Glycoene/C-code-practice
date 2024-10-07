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

    system("pause");
    return 0;
}