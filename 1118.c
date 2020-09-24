/*  #include<stdio.h>
int main()
{
    float n,s,p,k;
    s = p = k = 0;
    while(1)
    {
        scanf("%f",&n);
        if(n < 0.0 || n > 10.0)
            printf("nota invalida\n");
        else
        {
            s += n;
            p++;
            if(p==2)
            {
                s/=2;
                printf("media = %.2lf\n",s);
                printf("novo calculo (1-sim 2-nao)\n");
                while(1)
                {
                    scanf("%f",&n);
                    if((int)n==1)
                    {
                        s = p = 0;
                        k=1;
                        break;
                    }
                    else if((int)n==2)
                        return 0;
                    else
                        printf("novo calculo (1-sim 2-nao)\n");
                }
            }
        }
    }
    return 0;
}

*/
#include<stdio.h>
int main(){
    int x,y,i,sum=0,max,min;

    scanf("%d%d",&x,&y);
    if(x>y){
        max=x;
        min=y;
    }
    else{
         max=y;
        min=x;
    }
    for(i=min; i<=max; i++){
        if(i%13!=0){
            sum+=i;
        }
    }
    printf("%d\n",sum);
    return 0;
}
