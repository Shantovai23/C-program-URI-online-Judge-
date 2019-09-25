#include<stdio.h>
int main()

{
    double fs,value,per1,per2,name;

    scanf("%s",&name);



    scanf("%lf%lf",&fs,&value);

    per1 = (value*15)/100;
     per2=per1+fs;


    printf("TOTAL = R$ %.2lf\n",per2);



    return 0;
}
