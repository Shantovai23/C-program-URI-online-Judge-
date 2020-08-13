#include<stdio.h>

int main(){

   int max=-1,pos,i,n;

   for(i=1; i<101; i++){
        scanf("%d",&n);
    if(max<n){
        max=n;
        pos=i;
    }
   }
   printf("%d\n%d\n",max,pos);
   return 0;
}
