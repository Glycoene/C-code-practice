#include <stdio.h>
#include <stdlib.h>

/*
浮点型：（unsigned） float（单精度浮点型）4字节
        格式匹配符为%f
        （unsigned） double（双精度浮点型）8字节
        格式匹配符为%lf
        如果float小数后不加f，默认为双精度降维至单精度并赋值
*/

int main(void)
{
    float flt = 3.1415f;
    double dbl = 3.1415926;

    printf("flt = %f\n",flt);
    printf("dbl = %lf\n",dbl);

    //默认保留6位小数，可在%后加想要保留的小数位数，如%.2f为保留两位小数，并四舍五入
    //默认保留6位小数，可在%后加想要保留的小数位数，如%.2lf为保留两位小数，并四舍五入

    printf("flt = %.2f\n",flt);
    printf("dbl = %.2lf\n",dbl);

    //在%之后.之前加数字，表示输出多少个字符（包含小数点），如%8.2f为输出8个字符并保留两位小数，缺少的字符会在数字最前用空格代替

    printf("flt = %8.2f\n",flt);
    printf("dbl = %8.2lf\n",dbl);

    //再在%之后，数字之前加0，表示缺少的字符用0代替

    printf("flt = %08.2f\n",flt);
    printf("dbl = %08.2lf\n",dbl);

    //科学计数法赋值，科学计数法的格式匹配符为%e

    flt = 6.9e3f;//6.9*1000=6900
    dbl = 96e-3f;//96*0.001=0.096

    printf("flt = %f\n",flt);
    printf("dbl = %lf\n",dbl);

    system("pause");
    return 0;
}