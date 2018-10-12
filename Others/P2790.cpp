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

int pre[33], top[33], id[33];

void replace(int x){
	if(pre[x] != x) {
		replace(pre[x]);
		pre[x] = x;
	}
	pre[top[x]] = x;
	top[x] = x;
	id[x] = x;
}

void onto(int a, int b){
	while(b != pre[b])	b = pre[b];
	pre[b] = a;
	while(a != pre[a]){
		id[a] = id[b];
		a = pre[a];
	}
	id[a] = id[b];
	top[id[b]] = a;
}


int main(int argc, char const *argv[])
{
	ios::sync_with_stdio(false);
	int n;
	cin >> n;
	for(int i=0; i<n; ++i)	pre[i] = i, top[i] = i, id[i] = i;
	string op1, op2;
	int a, b;
	while(cin >> op1 && op1 != "quit"){
		cin >> a >> op2 >> b;
		if(a == b)	continue;
		if(op1 == "move"){
			if(op2 == "over"){
				if(a != pre[a])	replace(pre[a]);
				onto(a, b);
			} else{
				if(a != pre[a])	replace(pre[a]);
				if(b != pre[b])	replace(pre[b]);
				onto(a, b);
			}
		}
		else {
			if(op2 == "over"){
				if(b != pre[b])	replace(pre[b]);
				onto(a, b);
			} else{
				onto(a, b);
			}
		}
	}
	for(int i=0; i<n; ++i){
		cout << i << ": ";
		print(i);
	}
	return 0;
}