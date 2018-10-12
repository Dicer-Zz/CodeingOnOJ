#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod=1e9+7;
const ll MAXN=1e6+5;
 
ll qpow(ll a, ll b)
{
	ll ans=1;
	while(b)
	{
		if(b%2)
			ans=ans*a%mod;
		a=a*a%mod;
		b>>=1;
	}
	return ans;
}
 
ll pow2[MAXN],ans[MAXN];
ll solve(int n, int m)
{
	ll ans;
	if(n==2)
		return pow2[m]*(pow2[m]-1)%mod;
	if(n==1)
		return pow2[m];
	ans = (pow2[m]*qpow(pow2[m]-1,n-2)%mod*max(pow2[m]-2,0ll)%mod+solve(n-2,m))%mod;
	return ans;
}
int main(void)
{
	int T,n,m,i;
	pow2[0]=1;
	for(i=1;i<MAXN;i++)
		pow2[i]=pow2[i-1]*2%mod;
	scanf("%d",&T);
	while(T--)
	{
		scanf("%d%d",&n,&m);
		printf("%lld\n",solve(n,m));
	}
	return 0;
}