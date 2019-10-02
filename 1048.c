#include<stdio.h>
int main()
{
    float old,neew_salary,tem_salary;
    


    scanf("%f",&old);

    if(old>=0 && old<=400.00)
    {
        tem_salary=(old*15)/100;
        neew_salary=tem_salary+old;
        printf("Novo salario: %.2f\n",neew_salary);
        printf("Reajuste ganho: %.2f\n",tem_salary);
        printf("Em percentual: 15 %%\n");
    }

    else if(old>=400.00 && old<=800.00)
    {
        tem_salary=(old*12)/100;
        neew_salary=tem_salary+old;
        printf("Novo salario: %.2f\n",neew_salary);
        printf("Reajuste ganho: %.2f\n",tem_salary);
        printf("Em percentual: 12 %%\n");
    }

    else if(old>=800.01 && old<=1200.00)
    {
        tem_salary=(old*10)/100;
        neew_salary=tem_salary+old;
        printf("Novo salario: %.2f\n",neew_salary);
        printf("Reajuste ganho: %.2f\n",tem_salary);
        printf("Em percentual: 10 %%\n");
    }
    else if(old>=1200.01 && old<=2000.00)
    {
        tem_salary=(old*7)/100;
        neew_salary=tem_salary+old;
        printf("Novo salario: %.2f\n",neew_salary);
        printf("Reajuste ganho: %.2f\n",tem_salary);
        printf("Em percentual: 7 %%\n");
    }
    else if (old>2000.00)
    {

                    tem_salary=(old*4)/100;
                    neew_salary=tem_salary+old;
                    printf("Novo salario: %.2f\n",neew_salary);
                    printf("Reajuste ganho: %.2f\n",tem_salary);
                    printf("Em percentual: 4 %%\n");
    }


return 0;
}
