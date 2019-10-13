#include<stdio.h>
int main()
{
    int n,i,even=0,odd=0, posi=0,negi=0;


    for(i=0; i<5; i++)
    {
        scanf("%d",&n);


        if(n%2==0)
        {
            even++;
        }

        if(n%2!=0)
        {
            odd++;
        }

        if(n>0)
        {
            posi++;
        }

        if(n<0)
        {
            negi++;
        }

    }
    printf("%d valor(es) par(es)\n",even);
    printf("%d valor(es) impar(es)\n",odd);
    printf("%d valor(es) positivo(s)\n",posi);
    printf("%d valor(es) negativo(s)\n",negi);

    return 0;


}
