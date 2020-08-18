
#include<stdio.h>
int main(){

    int I,J,a=7,b=6,c=5;

    for(I=1; I<=9; I+=2){
        printf("I=%d J=%d\n",I,a);
         printf("I=%d J=%d\n",I,b);
          printf("I=%d J=%d\n",I,c);
         a+=2;
         b+=2;
         c+=2;
    }

return 0;
}
