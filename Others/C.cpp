#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn = 3e5+100;
ll a[maxn];
map<ll,ll>mp[11];
int main(){
	ll n,k,mmax = 0;
	scanf("%I64d %I64d",&n,&k);
	for(int i=0;i<n;++i){
		scanf("%I64d",&a[i]);
		mmax = max(mmax,(ll)log10(a[i])+1);
		mp[(ll)log10(a[i])+1][a[i]%k]++;
	}
	sort(a,a+n);
	ll res = 0,t,tem;
	for(int i=0;i<n;++i){
		t = mmax;tem = a[i];
		while(t--){
			tem *= 10;
			printf("%I64d\n",tem );
			res += mp[mmax-t][(k-tem%k)%k];
			// printf("mp[%I64d][%I64d] =  %I64d\n",mmax-t,k-tem%k,mp[mmax-t][k-tem%k] );
			// if(a[i]%k == ((k-tem%k)%k))	res--;
		}
	}
	printf("%I64d\n", res);
	return 0;
}