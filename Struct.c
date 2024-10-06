#include <stdio.h>
#include <stdlib.h>

//对于需要有很多不同类型数据描述的复杂对象，C语言给了自定义类型的能力
//自定义类型有一种叫‘结构体（struct）’
//结构体能将一些单一类型组合在一起

//描述一个学生
struct stu
//结构体 结构体名称
{
    char name[10];
    int age;
    char sex[6];
    char tel[15];
    //以上为结构体的成员
};
//可以理解为创建了一个名称为stu的结构体数据类型

void print(struct stu* pzs)
{
    printf("%s %d %s %s\n",(*pzs).name,(*pzs).age,(*pzs).sex,(*pzs).tel);//(*ps)一定要有()
    printf("%s %d %s %s\n",pzs->name,pzs->age,pzs->sex,pzs->tel);//结构体指针变量->成员名
}

int main(void)
{
    struct stu zs = {"zhangsan",20,"male","11122233344"};
//结构体 结构体名称 结构体对象，可以理解为‘数据类型 变量名’的形式
    printf("%s %d %s %s\n",zs.name,zs.age,zs.sex,zs.tel);//结构体对象.成员名

    print(&zs);

    system("pause");
    return 0;
}