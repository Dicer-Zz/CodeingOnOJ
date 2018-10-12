#pragma GCC optimize(2)
#pragma GCC optimize(3)
#include <bits/stdc++.h>
using namespace std;
#define clr(s, x) memset(s, x, sizeof(s))
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> pii;
inline int read(){int r=0;char c=getchar();while(c<'0'||c>'9') {c=getchar();}while(c>='0'&&c<='9') {r=r*10+c-'0';c=getchar();}return r;}
inline ll readll(){ll r=0;char c=getchar();while(c<'0'||c>'9') {c=getchar();}while(c>='0'&&c<='9') {r=r*10+c-'0';c=getchar();}return r;}
inline ll qpow(ll a,ll b,ll mod){ll res=1;while(b){if(b&1)res = (res*a)%mod;a=(a*a)%mod;b>>=1;}return res;}
inline ll gcd(ll a,ll b){while(b^=a^=b^=a%=b);return a;}
const double eps = 1e-8;
const ll LLINF = 0x3f3f3f3f3f3f3f3f;
const int INF = 0x3f3f3f3f;
const int mod = 1e9+7;
const int MAXN = 1e5;
const int MAXM = 1e5;
int mu[MAXN+10], check[MAXN+10], prime[MAXN+10];
void Mobius()
{
    memset(check,false,sizeof(check));
    mu[1] = 1;
    int tot = 0;
    for(int i = 2; i <= MAXN; i++)
    {
        if( !check[i] )
        {
            prime[tot++] = i;
            mu[i] = -1;
        }
        for(int j = 0; j < tot; j++)
        {
            if(i * prime[j] > MAXN) break;
            check[i * prime[j]] = true;
            if( i % prime[j] == 0)
            {
                mu[i * prime[j]] = 0;
                break;
            }
            else
            {
                mu[i * prime[j]] = -mu[i];
            }
        }
    }
    for(int i=2; i <= MAXN; ++i){
    	mu[i] += mu[i-1];
    	// cout << mu[i] << endl;
    }	
}
int main(int argc, char const *argv[])
{
	// ios::sync_with_stdio(false);
	Mobius();
	int T;
	cin >> T;
	int a,b,c,d,k,kase = 1;
	while(T--){
		cin >> a >> b >> c >> d >> k;
		if(k == 0){
			printf("Case %d: 0\n", kase++);
			continue;
		}
		b /= k;
		d /= k;
		if(b > d)	swap(b, d);
		ll ans1 = 0, ans2 = 0;
		for(int l=1,r; l<=b; l=r+1){
			r =	min(b/(b/l),d/(d/l));
			ans1 += (ll)(mu[r]-mu[l-1])*(b/l)*(d/l);
		}
		for(int l=1,r; l<=b; l=r+1){
			r = b/(b/l);
			ans2 += (ll)(mu[r]-mu[l-1])*(b/l)*(b/l); 
		}
		// cout << ans1 << ' ' << ans2;
		printf("Case %d: ", kase++);
		cout << ans1-ans2/2 << endl;	
	}
	return 0;
}