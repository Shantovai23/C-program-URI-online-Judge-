#include<stdio.h>
int main(){
  int X,Y,i;

  while(1){
    scanf("%d%d",&X,&Y);

    if(X==Y)
        break;
    else{
        if(X>Y){
            printf("Decrescente\n");
        }
        else{
            printf("Crescente\n");
        }
    }
  }
return 0;
}
