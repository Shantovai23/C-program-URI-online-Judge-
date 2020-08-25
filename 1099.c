#include <stdio.h>
int main()
{
    int N,X,Y,i,b,c=0;
    scanf("%d", &N);
    for(i=1;i<=N;i++)
    {
        scanf("%d%d",&X,&Y);
        if(X==Y)
        {
            c=0;
            printf("%d\n",c);
        }
        else if(X<Y)
        {
            for(b=X+1,c=0;b<Y;b++)
            {
                if(b%2==1||b%2==-1)
                    c+=b;
            }
            printf("%d\n",c);
        }
        else
        {
            for(b=Y+1,c=0;b<X;b++)
            {
                if(b%2==1||b%2==-1)
                    c+=b;
            }
            printf("%d\n",c);
        }
    }
    return 0;
}

