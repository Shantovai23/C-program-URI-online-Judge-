#include<stdio.h>
int main()
{
    int PQ,PC;
    float PP;



    scanf("%d",&PC);
    scanf("%d",&PQ);



    if(PC==1)
    {
        PP=PQ*4;
        printf("Total: R$ %.2f\n",PP);
    }


   else if(PC==2)
    {
        PP=PQ*4.5;
        printf("Total: R$ %.2f\n",PP);
    }

  else   if(PC==3)
    {
        PP=PQ*5;
        printf("Total: R$ %.2f\n",PP);
    }

  else  if(PC==4)
    {
        PP=PQ*2;
        printf("Total: R$ %.2f\n",PP);
    }

   else if(PC==5)
    {
        PP=PQ*1.5;
        printf("Total: R$ %.2f\n",PP);
    }

    else
        printf("Error Code\n");
    return 0;




}
