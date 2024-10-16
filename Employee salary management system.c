#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N_of_E 16

struct clerk
{
    int num;
    char name[16];
    char dep[16];
    float pay_s;
    float ins;
    float tax;
    float pay_f;
};

struct clerk arr[N_of_E];

void Menu()
{
    system("cls");

    printf("      员工工资管理系统      \n");
    printf("---------------------------\n");
    printf("      1. 录入员工数据       \n");
    printf("      2. 删除员工数据       \n");
    printf("      3. 修改员工数据       \n");
    printf("      4. 显示全部员工数据    \n");
    printf("      0. 退出程序           \n");
    printf("---------------------------\n");
}

void Key_in()
{
    for (char cdt1 = 'y'; cdt1 == 'y'; )
    {
        int num;
        system("cls");
        printf("请输入员工编号：");
        scanf("%d",&num);
        for (int cdt2 = 0; cdt2 <= N_of_E-1; cdt2++)
        {
            if (arr[cdt2].num == num)
            {
                printf("该编号已被录入，请输入其他编号\n");
                break;
            }
            else if (arr[cdt2].num != num && cdt2 == N_of_E-1)
            {
                arr[num-1].num = num;

                printf("请输入员工姓名：");
                scanf("%s",arr[num-1].name);

                printf("请输入员工部门：");
                scanf("%s",arr[num-1].dep);

                float pay_s;
                printf("请输入应付工资：");
                scanf("%f",&pay_s);
                arr[num-1].pay_s = pay_s;

                float ins;
                printf("请输入保险：");
                scanf("%f",&ins);
                arr[num-1].ins = ins;

                float tax;
                printf("请输入税金：");
                scanf("%f",&tax);
                arr[num-1].tax = tax;

                arr[num-1].pay_f = pay_s - ins - tax;

                printf("录入完成\n");
                break;
            }
        }
        printf("是否继续录入员工数据（y/n）：");
        while (getchar() != '\n')
        {
            ;
        }
        scanf("%c",&cdt1);
    }
}

void Delete()
{
    for (char cdt1 = 'y'; cdt1 == 'y'; )
    {
        char name[16];
        system("cls");
        printf("请输入要删除员工的名字：");
        scanf("%s",name);
        for (int cdt2 = 0; cdt2 <= N_of_E-1; cdt2++)
        {
            if (strcmp(arr[cdt2].name, name) == 0)
            {
                char ans = 'n';
                printf("已找到员工 %s 的数据，是否删除(y/n)：",name);
                while (getchar() != '\n')
                {
                    ;
                }
                scanf("%c",&ans);
                if (ans == 'y')
                {
                    arr[cdt2].num = 0;
                    strcpy(arr[cdt2].name, "\0");
                    strcpy(arr[cdt2].dep, "\0");
                    arr[cdt2].pay_s = 0;
                    arr[cdt2].ins = 0;
                    arr[cdt2].tax = 0;
                    arr[cdt2].pay_f = 0;
                    printf("员工数据已删除\n");
                    break;
                }
                else
                {
                    printf("已取消\n");
                    break;
                }
            }
            else if (strcmp(arr[cdt2].name, name) != 0 && cdt2 == N_of_E-1)
            {
                printf("未找到员工 %s 的数据\n",name);
                break;
            }
        }
        printf("\n是否继续删除其他员工的数据(y/n)：");
        while (getchar() != '\n')
        {
            ;
        }
        scanf("%c",&cdt1);
    }
}

void Revise()
{
    for (char cdt1 = 'y'; cdt1 == 'y'; )
    {
        char name[16];
        system("cls");
        printf("请输入要修改员工的名字：");
        scanf("%s",name);
        for (int cdt2 = 0; cdt2 <= N_of_E-1; cdt2++)
        {
            if (strcmp(arr[cdt2].name, name) == 0)
            {
                printf("\n该员工的数据如下\n");
                printf("编号：%d\n",arr[cdt2].num);
                printf("姓名：%s\n",arr[cdt2].name);
                printf("部门：%s\n",arr[cdt2].dep);
                char dep[16];
                strcpy(dep, arr[cdt2].dep);
                printf("应付工资：%.2f\n",arr[cdt2].pay_s);
                float pay_s = arr[cdt2].pay_s;
                printf("保险：%.2f\n",arr[cdt2].ins);
                float ins = arr[cdt2].ins;
                printf("税金：%.2f\n",arr[cdt2].tax);
                float tax = arr[cdt2].tax;
                printf("实付工资：%.2f\n",arr[cdt2].pay_f);
                for (char ans2 = 'y'; ans2 == 'y'; )
                {
                    printf("\n请选择要修改的数据：\n");
                    int ans1;
                    printf("1. 部门\n2. 应付工资\n3. 保险\n4. 税金\n");
                    scanf("%d",&ans1);
                    if (ans1 == 1)
                    {
                        printf("请输入修改后的部门：");
                        scanf("%s",dep);
                        printf("是否继续修改(y/n)：");
                        while (getchar() != '\n')
                        {
                            ;
                        }
                        scanf("%c",&ans2);
                    }
                    else if (ans1 == 2)
                    {
                        printf("请输入修改后的应付工资：");
                        scanf("%f",&pay_s);
                        printf("是否继续修改(y/n)：");
                        while (getchar() != '\n')
                        {
                            ;
                        }
                        scanf("%c",&ans2);
                    }
                    else if (ans1 == 3)
                    {
                        printf("请输入修改后的保险：");
                        scanf("%f",&ins);
                        printf("是否继续修改(y/n)：");
                        while (getchar() != '\n')
                        {
                            ;
                        }
                        scanf("%c",&ans2);
                    }
                    else if (ans1 == 4)
                    {
                        printf("请输入修改后的税金：");
                        scanf("%f",&tax);
                        printf("是否继续修改(y/n)：");
                        while (getchar() != '\n')
                        {
                            ;
                        }
                        scanf("%c",&ans2);
                    }
                }
                float pay_f = pay_s - ins - tax;
                printf("\n修改后的员工数据如下：\n");
                printf("编号：%d\n",arr[cdt2].num);
                printf("姓名：%s\n",arr[cdt2].name);
                printf("部门：%s\n",dep);
                printf("应付工资：%.2f\n",pay_s);
                printf("保险：%.2f\n",ins);
                printf("税金：%.2f\n",tax);
                printf("实付工资：%.2f\n",pay_f);
                printf("是否确认修改(y/n)：");
                int ans3 = 'n';
                while (getchar() != '\n')
                {
                    ;
                }
                scanf("%c",&ans3);
                if (ans3 == 'y')
                {
                    strcpy(arr[cdt2].dep, dep);
                    arr[cdt2].pay_s = pay_s;
                    arr[cdt2].ins = ins;
                    arr[cdt2].tax = tax;
                    arr[cdt2].pay_f = pay_f;
                    printf("修改完成\n");
                    break;
                }
                else
                {
                    printf("取消修改\n");
                    break;
                }
            }
            else if (strcmp(arr[cdt2].name, name) != 0 && cdt2 == N_of_E-1)
            {
                printf("未找到员工 %s 的数据\n",name);
                break;
            }
        }
        printf("\n是否继续修改其他员工的数据(y/n)：");
        while (getchar() != '\n')
        {
            ;
        }
        scanf("%c",&cdt1);
    }
}

void Display()
{
    system("cls");
    printf("以下为所有员工的数据：\n");
    printf("---------------------------------------------------------------------------------------\n");
    for (int cdt1 = 0; cdt1 <= N_of_E-1; cdt1++)
    {
        printf("编号:%d  姓名:%s  部门:%s  ", arr[cdt1].num, arr[cdt1].name, arr[cdt1].dep);
        printf("应付工资:%.2f  保险:%.2f  税金:%.2f  ", arr[cdt1].pay_s, arr[cdt1].ins, arr[cdt1].tax);
        printf("实付工资:%.2f\n", arr[cdt1].pay_f);
        printf("---------------------------------------------------------------------------------------\n");
    }
    system("pause");
}

int main()
{
    int ans = 1;
    while (ans)
    {
        Menu();
        printf("请选择(0~4)：");
        scanf("%d",&ans);
        switch (ans)
        {
            case 1:
                Key_in();
                break;
            case 2:
                Delete();
                break;
            case 3:
                Revise();
                break;
            case 4:
                Display();
                break;
            default:
                break;
        }
    }
    return 0;
}