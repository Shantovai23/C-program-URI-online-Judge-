#include<stdio.h>
int main()
{
    int A,B,C=24,D=0,E=0,F=0;


    scanf("%d%d",&A,&B);



    if(A==B)
    {
        printf("O JOGO DUROU %d HORA(S)\n",C);
    }

    else if(A<B)
    {
        D=B-A;
        printf("O JOGO DUROU %d HORA(S)\n",D);
    }
    else if(A>B)
    {
        E=B+C;
        F=E-A;
        printf("O JOGO DUROU %d HORA(S)\n",F);
    }

    return 0;
}
