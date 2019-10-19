#include<stdio.h>
int main()
{
    float n,a1,a2,a3,a4,a5,a6,a7,a8;

    scanf("%f",&n);

    if(n>=00.00 && n<=2000.00)
    {
        printf("Isento\n");
    }
    else if(n>=2000.01 && n<=3000.00)
    {
        a1=n-2000;
        a2=(a1*8)/100;
        printf("R$ %.2f\n",a2);
    }
    else if(n>=3000.01 && n<=4500.00)
    {
        a1=n-2000;
        a3=a1-1000;
        a4=(1000*8)/100;
        a5=(a3*18)/100;
        a6=a4+a5;
        printf("R$ %.2f\n",a6);
    }

    else if(n>=4500.00)
    {
        a1=n-2000;
        a4=a1-2500;
        a5=(1000*8)/100;
        a6=(1500*18)/100;
        a7=(a4*28)/100;
        a8=a5+a6+a7;
        printf("R$ %.2f\n",a8);


    }

    return 0;

}
