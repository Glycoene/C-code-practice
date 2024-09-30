#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    //C语言中，用双引号引着的一串字符称之为字符串，一定有一个结束标记'\0'
    //"abc" => 'a''b''c''\0'
    //字符串的格式匹配符为%s

    char cha = 'd';
    printf("cha = %c\n",cha);

    char str_1[] = "abc";
    printf("str_1 = %s\n",str_1);//挨着从字符串的第一个字符开始打印，打印到'\0'结束

    char str_2[] = {'e','f','g','\0'};
    printf("str_2 = %s\n",str_2);

    system("pause");
    return 0;
}