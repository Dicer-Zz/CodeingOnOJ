#include<stdio.h>
#include<stdlib.h>
int main()
{
    int x,y,x2,y2,a,b,flag,t1,t2,t;
    scanf("%d",&t);
    while(t--)
    {
        flag=1;
        scanf("%d%d%d%d%d%d",&x,&y,&x2,&y2,&a,&b);
        if(abs(x-x2)%a==0&&abs(y-y2)%b==0)
        {
            t1=abs(x-x2)/a;
            t2=abs(y-y2)/b;
            if(abs(t1-t2)%2==0)
            {
                printf("YES\n");
                flag=0;
            }
            else 
            printf("NO\n");
        }
        else printf("NO\n");
    }
    return 0;
}
