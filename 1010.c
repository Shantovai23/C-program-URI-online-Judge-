#include<stdio.h>
int main()

{
    int pc1,pu1,pc2,pu2;
    float ppu1,ppu2,value1,value2,Total;


    scanf("%d%d%f",&pc1,&pu1,&ppu1);
    scanf("%d%d%f",&pc2,&pu2,&ppu2);


    value1 = pu1*ppu1;
    value2 = pu2*ppu2;

    Total = value1+value2;



    printf("VALOR A PAGAR: R$ %.2f\n",Total);

    return 0;





}
