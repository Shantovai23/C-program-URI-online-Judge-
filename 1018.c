#include<stdio.h>
int main()
{
    int N, note100,note50,note20,note10,note5,note2,note1;

scanf("%d",&N) ;

 note100=note50=note20=note10=note5=note2=note1=0;
 printf("%d\n",N);

if(N>=100)
{
     note100=N/100;
     N-=note100*100;
}
if(N>=50)
{
    note50=N/50;
    N-=note50*50;
}
if(N>=20)
{
    note20=N/20;
    N-=note20*20;
}
if(N>=10)
{
    note10=N/10;
    N-=note10*10;
}
if(N>=5)
{
    note5=N/5;
    N-=note5*5;
}
if(N>=2)
{
    note2=N/2;
    N-=note2*2;
}

if(N>=1)
{
    note1=N/1;
    N-=note1*1;
}


printf("%d nota(s) de R$ 100,00\n",note100);
printf("%d nota(s) de R$ 50,00\n",note50);
printf("%d nota(s) de R$ 20,00\n",note20);
printf("%d nota(s) de R$ 10,00\n",note10);
printf("%d nota(s) de R$ 5,00\n",note5);
printf("%d nota(s) de R$ 2,00\n",note2);
printf("%d nota(s) de R$ 1,00\n",note1);
return 0;
}





