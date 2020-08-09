#include<stdio.h>
int main(){

  int n,i;

double x,y,z,ans;

scanf("%d",&n);
for(i=0; i<n; i++){
    scanf("%lf",&x);
      scanf("%lf",&y);
        scanf("%lf",&z);
        ans=((x/10)*2)+((y/10)*3) + ((z/10)*5);
        printf("%.1f\n",ans);
}

return 0;
}
