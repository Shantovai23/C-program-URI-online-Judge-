#include<stdio.h>
int main(){
    int interGoal,gremioGoal,chance,totalGame=0,interWin=0,gremioWin=0,draw=0;
    while(1){
        scanf("%d%d",&interGoal,&gremioGoal);
        printf("Novo grenal (1-sim 2-nao)\n");
        scanf("%d",&chance);

         totalGame++;

        if(chance==1){
           if(interGoal>gremioGoal){
            interWin+=1;
           }
           else if(interGoal<gremioGoal){
            gremioWin+=1;
           }
           else{
            draw++;
           }


        }


        else  if(chance==2){

           if(interGoal>gremioGoal){
            interWin+=1;
           }
           else if(interGoal<gremioGoal){
            gremioWin+=1;
           }
           else{
            draw++;
           }

           printf("%d grenais\n",totalGame);
           printf("Inter:%d\n",interWin);
           printf("Gremio:%d\n",gremioWin);
           printf("Empates:%d\n",draw);
            if(interWin>gremioWin){
            printf("Inter venceu mais\n");
          }
          else if(interWin<gremioWin){
             printf("Gremio venceu mais\n");
          }
          else{
            printf("Não houve vencedor\n");
          }
           break;
        }

    }
return 0;
}
