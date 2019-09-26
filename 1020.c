#include <stdio.h>

int main()
{
 int years,months,days,input;

 scanf("%d", &input);

 years = input/ 365;
 input = input - (years * 365);

 months = input / 30;
 input=input-(months*30);
 days = input;

 printf("%d ano(s)\n",years);
  printf("%d mes(es)\n",months);
  printf("%d dia(s)\n",days);


 return 0;
}

