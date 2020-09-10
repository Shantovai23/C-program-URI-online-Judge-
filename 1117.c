#include<stdio.h>
int main(){
    int i,mark=0;
    float n,avrg=0;
    while(1){
        scanf("%f",&n);
        if(n<0 || n>10){
            printf("nota invalida\n");
        }
        else{
            avrg+=n/2;
            mark++;
            if(mark==2){
                printf("media = %.2f\n",avrg);
                break;
            }
        }
    }
return 0;
}
