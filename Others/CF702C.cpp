#include<cstdio>
#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;

typedef long long LL;
const int N=1e5+10;
LL a[N];
LL b[N];
int n,m;

int main()
{
    scanf("%d%d",&n,&m);
    for(int i=0;i<n;i++)
        scanf("%I64d",&a[i]);
    for(int i=0;i<m;i++)
        scanf("%I64d",&b[i]);
    LL ans=0;
    for(int i=0;i<n;i++)
    {
        int x=lower_bound(b,b+m,a[i])-b;
        LL temp;
        if(x==0)
            temp=abs(a[i]-b[x]);
        else if(x==m)
            temp=abs(a[i]-b[m-1]);
        else
            temp=min(abs(a[i]-b[x]),abs(a[i]-b[x-1]));
        ans=max(ans,temp);
    }
    printf("%I64d\n",ans);
    return 0;
}
