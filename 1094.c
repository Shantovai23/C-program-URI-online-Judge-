#include<stdio.h>
int main(){

    int n,i,ex;
    float av1,av2,av3,totalCoba=0,totalCoe=0,totalRate=0,totalSapo=0;
    char cha;

    scanf("%d",&n);

   for(i=0; i<n; i++){
    scanf("%d %c",&ex,&cha);
    totalCoba+=ex;
    if(cha=='C'){
        totalCoe+=ex;

    }
    else if(cha=='R'){
        totalRate+=ex;

    }
    else if(cha=='S'){
        totalSapo+=ex;


    }

   }
 av1=((totalCoe*100)/totalCoba);
 av2=((totalRate*100)/totalCoba);
 av3=((totalSapo*100)/totalCoba);

   printf("Total: %.0f cobaias\n",totalCoba);
   printf("Total de coelhos: %.0f\n",totalCoe);
   printf("Total de ratos: %.0f\n", totalRate);
    printf("Total de sapos: %.0f\n", totalSapo);

   printf("Percentual de coelhos: %.2f %%\n",av1);
   printf("Percentual de ratos: %.2f %%\n",av2);
   printf("Percentual de sapos: %.2f %%\n",av3);



return 0;
}
