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
const int MAXN = 1e5+10;
const int MAXM = 1e5+10;

struct NODE{
	int sum;
	int l, r;
	int mid(){return (l+r)>>1;};
	int size(){return (r-l+1);};
	bool lazy;			//lazy tag, if lazy equal 1 means change, else no change.
}node[MAXN<<2];
inline void PushUp(int x){
	node[x].sum = node[x<<1].sum + node[x<<1|1].sum;
}
inline void PushDown(int x){
	if(!node[x].lazy)	return;
	node[x<<1].lazy ^=  1;
	node[x<<1|1].lazy ^=  1;
	node[x<<1].sum = node[x<<1].size() - node[x<<1].sum;
	node[x<<1|1].sum = node[x<<1|1].size() - node[x<<1|1].sum;
	node[x].lazy = 0;
}
void BuildTree(int l, int r, int x){
	node[x].l = l;
	node[x].r = r;
	node[x].sum = 0;
	node[x].lazy = 0;
	if(l == r)	return;
	int mid = node[x].mid();
	BuildTree(l, mid, x<<1);
	BuildTree(mid+1, r, x<<1|1);
	// PushUp(x);
}
inline void UpdataTree(int l, int r, int x){
	if(node[x].l >= l && node[x].r <= r){
		node[x].lazy ^= 1;
		node[x].sum = node[x].size() - node[x].sum;
		return;
	}
	PushDown(x);
	int mid = node[x].mid();
	if(r<=mid)	UpdataTree(l, r, x<<1);
	else if(l>mid)	UpdataTree(l, r, x<<1|1);
	else{
		UpdataTree(l, mid, x<<1);
		UpdataTree(mid+1, r, x<<1|1);
	}
	PushUp(x);
}
int ans;
inline void QueryTree(int l, int r, int x){
	// cout << node[x].l << "###" << node[x].r << "###" << node[x].lazy << endl;
	if(node[x].l >= l && node[x].r <= r){
		ans += node[x].sum;
		return;
	}
	PushDown(x);
	int mid = node[x].mid();
	if(r<=mid) QueryTree(l, r, x<<1);
	else if(l>mid)	QueryTree(l, r, x<<1|1);
	else {
		QueryTree(l, mid, x<<1) ;
	 	QueryTree(mid+1, r, x<<1|1);
	}
	// PushUp(x);
}
int main(int argc, char const *argv[])
{
	ios::sync_with_stdio(false);
	int n, q, a, b, c;
	cin >> n >> q;
	BuildTree(1, n, 1);
	while(q--){
		cin >> a >> b >> c;
		if(!a){
			UpdataTree(b, c, 1);
		} else{
			ans = 0;
			QueryTree(b, c, 1);
			cout << ans << endl;
		}
	}
	return 0;
}