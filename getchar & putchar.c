#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = getchar();// getchar可以接收用户输入字符的ASCII码值，返回一个字符型数据（这里用int的原因时要保存EOF也就是-1），当读取错误或读到文件末尾（end of file）时会返回EOF(-1)
    printf("%c",a);
    putchar(a);// putchar可以通过()内变量的值对应ASCII码表输出对应字符

    int ch1;
    while ((ch1 = getchar()) != EOF)// Ctrl + Z 会被判定为文件末尾
    {
        putchar(ch1);
    }
    // 自动换行的原理为：
    //                   输入缓冲区
    // getchar()  <----     a \n      <----    键盘
    // getchar()会一个字符一个字符按顺序读取输入缓冲区的字符
    // 键盘输入a时要敲回车，顺带输入了一个\n，getchar()在接收到'a'之后再次循环接收到'\n'，实现自动换行
    // 这条代码一般用来清理输入缓冲区

    char password[20];
    printf("请输入密码：");
    scanf("%s",password);

    //                      输入缓冲区
    // getchar()  <----     password\n      <----    键盘
    // 此时scanf只会读取'password'而不会读取'\n'
    // 而getchar会直接读取输入缓冲区剩下的'\n'，导致ret不等于'y'
    // 还有一种情况是密码中有空格，scanf只会读取到空格前，空格后不读取，也会使输入缓冲区中有残留字符,所以当密码中有空格时不适合用scanf读取

    // 此时就需要清理输入缓冲区
    int ch2;
    while ((ch2 = getchar()) != '\n')
    {
        ;
    }

    printf("请确认密码(y/n):");
    int ret = getchar();        
    if (ret == 'y')
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }

    system("pause");
    return 0;
}