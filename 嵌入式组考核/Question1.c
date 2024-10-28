#include <stdio.h>
#include <stdlib.h>

int main()
{
    char arr[64];
    printf("请输入字符串：");
    gets(arr);
    int ans = 0;
    for (int i = 0; arr[i] != '\0'; i++)
    {
        if (48<= arr[i] && arr[i] <= 57)
        {
            ans += arr[i] - 48;
        }
    }
    printf("字符串中所有数字的和：%d\n",ans);

    system("pause");
    return 0;
}