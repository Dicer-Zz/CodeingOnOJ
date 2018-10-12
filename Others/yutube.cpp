#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<algorithm>
#define ll long long
using namespace std;

struct node
{
    ll x,y;
} Q[1000010];

int cmp(node a,node b)
{
    return a.y<b.y;
}

int main()
{
    ll n;
    scanf("%lld",&n);
    for(ll i=0;i<n;i++)
    {
        scanf("%lld%lld",&Q[i].x,&Q[i].y);
    }
    sort(Q,Q+n,cmp);	
    ll mid=Q[n/2].y;
    ll sum=0;
    for(ll i=0;i<n;i++)
    {
        sum+=abs(Q[i].y-mid);
    }
    printf("%lld\n",sum);
    return 0;
}
