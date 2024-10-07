#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int num = 0;
    while (num <=100)
    {
        if (num%2 == 1)
        {
            printf("%d\n",num);
            num++;
        }
        num++;
    }


    system("pause");
    return 0;
}