#include <stdio.h>
#include <stdlib.h>// 为system、rand、arand函数服务
#include <time.h>// 为time函数服务
#include <windows.h>// 为Sleep函数服务

void menu()
{
    printf("  Guess the Number   \n");
    printf("---------------------\n");
    printf("       1. play       \n");
    printf("       0. exit       \n");
    printf("---------------------\n");
}

void game()
{
    // 第一步 生成随机数
    int req = rand() % 100 + 1;
    // rand为生成随机数的函数，括号内无需参数
    // 由于rand会生成0~32767之间的数，需要%100，使范围变成0~99，再+1，使范围变成1~100

    // 第二步 猜数字
    int guess;
    int left = 1;
    int right = 100;
    printf("猜数字(1 ~ 100):");
    while (1)
    {
        scanf("%d",&guess);
        if (guess < req && guess >= 1)
        {
            left = guess;
            printf("猜小了，数字在%d ~ %d之间\n",left,right);
        }
        else if (guess > req && guess <= 100)
        {
            right = guess;
            printf("猜大了，数字在%d ~ %d之间\n",left,right);
        }
        else if (guess < 1 || guess > 100)
        {
            printf("超出范围\n");
        }
        else
        {
            printf("ohhhhhhh猜中了!");
            break;
        }
    }
}

int main()
{
    srand((unsigned int)time(NULL));
    // 在rand函数使用前需要用srand函数设置随机数生成种子，括号内需一个无符号整型，最好是不停变化的，比如时间戳
    // 时间戳为系统时间相对于计算机起始时间的差值，单位是秒
    // time函数可以获取系统时间，需要一个指针变量参数（可以用NULL空指针），会返回一个long long类型的整数，也就是时间戳
    // 由于time函数返回的是long long类型的整数，而srand需要一个unsigned int类型的整数，所以需要强制类型转换，在time函数前加'(unsigned int)'
    int ans = 0;
    do
    {
        menu();
        printf("请选择(0/1):");
        scanf("%d",&ans);
        switch(ans)
        {
            case 1:
                system("cls");
                game();
                break;
            case 0:
                printf("退出游戏");
                break;
            default:
                printf("选择错误，请重新选择");
                break;
        }
        Sleep(5000);
        system("cls");
    } while (ans);
    
    return 0;
}