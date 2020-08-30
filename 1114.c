#include<stdio.h>
int main(){
    int wp;

    while(1){
       scanf("%d",&wp);
       if(wp==2002){
        printf("Acesso Permitido\n");
        break;
       }
       else{
        printf("Senha Invalida\n");
       }

    }
return 0;
}
