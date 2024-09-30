#include <stdio.h>
#include <stdlib.h>

/*
    整型：(designed) int/short/long/long long
        存储(无符号)整数
        格式匹配符：(%u/%hu/%lu/%llu) %d/%hd/%ld/%lld

字符串型：char
        存储一个字符，占用一个字节
        格式匹配符：%c
        
*/

int main(void)
{
    char let = 'A';
    printf("let = %c\n",let);
    printf("let = %d\n",let);           //65

    let = 'M';
    printf("let = %c\n",let);
    printf("let = %d\n",let);           //77

    /*
    字符会与ASCII对照表的数字一一对应
    'A':65
    'a':97
    '0':48
    '\n':10
    '\0':0
    */

    //可以实现大小写转换

    let = 'B';
    printf("let = %c\n",let+32);

    //也可实现数字字符转换

    char num = '5';
    printf("num = %c\n",num+4);

    //转义字符：'\'将普通字符转为特殊意，将特殊字符转为本身意，对%转义无效

    printf("'\n'的值为%d\n",'\n');
    printf("'\\n'的值为%d\n",'\n');

	system("pause");
	return 0;
}