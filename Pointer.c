#include <stdio.h>

int main(void)
{
    int a = 10;//向内存申请4个字节的位置存放'10'
    int* pa = &a;//'*'表示'p'为指针变量，'*'前为指针变量指向的类型，&'为取地址操作符
    char b = 'b';
    char* pb = &b;
    printf("%p\n",pa);//'%p'为地址的格式匹配符
    printf("%p\n",pb);

    *pa = 20;//解引用操作符'*(name)'，通过(name)中存放的地址，找到(name)所指向的对象，'*(name)'就是(name)所指向的对象
    printf("%d\n",a);

    printf("%d\n",sizeof(int*));
    printf("%d\n",sizeof(float*));
    printf("%d\n",sizeof(char*));
    //不管什么类型的指针，都是在创建指针变量
    //指针变量是用来存放地址的
    //指针变量的大小取决于一个地址存放的时候需要多大空间
    //32位机器上的地址用32个bit存储，也就是4Byte，所以指针变量的大小是4字节
    //64位机器上的地址用64个bit存储，也就是8Byte，所以指针变量的大小是8字节

    return 0;
}
