#include<stdio.h>
int main(){
    int n,i,j;

    scanf("%d",&n);
    for(i=1; i<=4*n-1; i+=4){
        for(j=i; j<=i+2; j++){
            printf("%d ",j);
        }
        printf("PUM\n");
    }
return 0;
}
