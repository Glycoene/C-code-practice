#include <stdio.h>
#include <stdlib.h>
#include <string.h>// 为strlen、strcmp服务
#include <windows.h>// 为Sleep服务

int main(void)
{
    // 计算n的阶乘
    printf("输入要求的阶乘:");
    int req1;
    scanf("%d",&req1);
    int ans1 = 1;
    for (int i = 2; i <= req1; i++)
    {
        ans1 *= i;
    }
    printf("%d! = %d\n",req1,ans1);

    system("pause");
    system("cls");// cls为清空屏幕

    // 计算从1~n的阶乘的和
    printf("输入要求阶乘的和的n的值:");
    int req2;
    scanf("%d",&req2);
    int ans2 = 0;
    for (int i = 1; i <= req2; i++)
    {
        int s = 1;
        for (int j = 1;j <= i;j++)
        {
            s *= j;
        }
        ans2 += s;
    }
    printf("1~%d的阶乘的和 = %d\n",req2,ans2);

    system("pause");
    system("cls");

    // 查找数组中的元素
    int arr1[] = {1,2,3,4,5,6,7,8,9,10};
    printf("请输入你想查找的元素(1~10):");
    int req3;
    scanf("%d",&req3);
    for (int i = 0; i < sizeof(arr1)/sizeof(arr1[0]); i++)
    {
        if (arr1[i] == req3)
        {
            printf("元素的下标是%d\n",i);
        }
    }

    system("pause");
    system("cls");

    // 多个字符从两端移动，向中间汇聚
    char arr2[] = "Welcome!";
    char arr3[] = "########";
    for (int left = 0, right = strlen(arr2) - 1; left <= right; left++, right--)
    {
        arr3[left] = arr2[left];
        arr3[right] = arr2[right];
        printf("%s\n",arr3);
        Sleep(1000);
        system("cls");
    }
    printf("%s\n",arr3);

    system("pause");
    system("cls");

    // 模拟用户登录情景，只允许输入三次密码，密码正确则提示登陆成功，否则退出程序
    printf("请输入密码:");
    char psw[16] = "password";
    char psw_in[16];
    for (int i = 3; i > 0; i--)
    {
        scanf("%s",psw_in);
        if (strcmp(psw_in, psw) == 0)// 比较两个字符串是否相等，不能使用==，应该用库函数strcmp，如果strcmp返回值等于0，则两个字符串相等
        {
            printf("密码正确，登录成功\n");
            break;
        }
        else
        {
            printf("密码错误，请重新输入，你还有%d次机会:",i-1);
        }
    }
    
    system("pause");
    return 0;
}