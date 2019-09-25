#include<stdio.h>
#include<math.h>

int main()
{
    double x1,x2,y1,y2,a,b,c,d,e,result;


    scanf("%lf%lf",&x1,&y1);
    scanf("%lf%lf",&x2,&y2);
    a = x2-x1;
    b = y2-y1;

    c = a*a;
    d = b*b;

    e = c+d;

    result = sqrt(e);


    printf("%.4lf\n",result);
    return 0;






}
