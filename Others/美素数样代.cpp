#include<stdio.h>
#include<string.h>
#define LL long long
#define x 1000010
int a[x];
int b[x];
void SU()
{
    int i,j;
    a[0]=a[1]=1;
    memset(a,0,sizeof(0));
    for(i=2;i<=x;i++)
    {
        if(a[i]==0)
        {
            for(j=2;i*j<x;j++)
            {
                a[i*j]=1;
            }
        }
    }
}
int Q(int m)
{
    int sum=0;
    while(m!=0)
    {
        sum+=m%10;
        m/=10;
    }
    return sum;
}
int main()
{
    int t,l,r,sum;
    int i,j;
    int T=1;
    SU();
    memset(b,0,sizeof(0));
    for(i=2;i<x;i++)
    {
        if(a[i]==0&&a[Q(i)]==0)
        {
            sum+=1;
            b[i]=sum;
        }
        else b[i]=sum;
    }
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d",&l,&r);
        sum=b[r]-b[l-1];
        printf("Case #%d: %d\n",T++,sum);
    }
    return 0;
}
