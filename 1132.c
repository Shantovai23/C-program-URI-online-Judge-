
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
