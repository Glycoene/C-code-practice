#include <stdio.h>
#include <stdlib.h>

 int main(void)
 {
    int input;
    scanf("%d",&input);
    printf("input = %d\n",input);

    char password[20];
    printf("请输入密码：");
    scanf("%s",password); //数组名本来就是地址，所以无需取地址

    system("pause");
    return 0;
 }