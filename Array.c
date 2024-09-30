#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int arr[10] = {10,11,12,13,14,15,16,17,18,19};
    //数组的下标    0  1  2  3  4  5  6  7  8  9    下标都是从0开始的
    int i = 0;
    while (i < 10)
    {
        printf("%d ",arr[i]);//利用下标寻找arr数组中的数，并打印  
        i = i + 1;
    }
    printf("\n");

    system("pause");
    return 0;
}