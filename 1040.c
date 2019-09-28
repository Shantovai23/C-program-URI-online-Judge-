#include<stdio.h>
int main()
{
    float N1,N2,N3,N4,media,incase,media2;


    scanf("%f%f%f%f",&N1,&N2,&N3,&N4);



    N1=N1*2;
    N2=N2*3;
    N3=N3*4;
    N4=N4*1;


    media=(N1+N2+N3+N4)/10;
    printf("Media: %.1f\n",media);


    if(media>=7)
    {
        printf("Aluno aprovado.\n");
    }
    else if(media<5)
    {
        printf("Aluno reprovado.\n");
    }
    else if(media>=5 && media<=6.99)
    {
        printf("Aluno em exame.\n");
        {
            scanf("%f",&incase);
            printf("Nota do exame: %.1f\n",incase);
            media2=(media+incase)/2;
        }
        {
            if(media2>5)
            {
                printf("Aluno aprovado.\n");
            }
            else if(media2<4.9)
            {
                printf("Aluno reprovado.\n");
            }


        }
        printf("Media final: %.1f\n",media2);
    }


}
