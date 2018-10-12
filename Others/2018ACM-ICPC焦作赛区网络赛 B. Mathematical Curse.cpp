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
const int INF = 0x3f3f3f3f;
const ll LLINF = 0x3f3f3f3f3f3f3f3f;
const int mod = 1e9+7;
const int MAXN = 1e3+15;
const int MAXM = 1e3+15;

ll Max[MAXN][7], Min[MAXN][7];
ll a[MAXN];
char op[7];
ll calc(ll n, ll m, char op){
	if(op == '+')	return n + m;
	if(op == '-')	return n - m;
	if(op == '*')	return n * m;	
	if(op == '/')	return n / m;	
}
int main(int argc, char const *argv[])
{
	ios::sync_with_stdio(false);
	ll val, n, m;
	int T;
	cin >> T;
	while(T--){
		cin >> n >> m >> val;
		for(int i=1; i<=n; ++i) cin >> a[i];
		for(int i=1; i<=m; ++i) cin >> op[i];
		for(int i=0; i<=n; ++i) {
			for(int j=0; j<=m; ++j){
				Max[i][j] = -LLINF;
				Min[i][j] = LLINF;
			}
		}
		Max[0][0] = val;
		Min[0][0] = val;
		for(int i=1; i<=n; ++i){
			Max[i][0] = val;
			Min[i][0] = val;
			for(int j=1; j<=m; ++j){
				Max[i][j] = Max[i-1][j];
				Min[i][j] = Min[i-1][j];
				if(Max[i-1][j-1] != -LLINF){
					Max[i][j] = max(Max[i][j], calc(Max[i-1][j-1], a[i], op[j]));
					Min[i][j] = min(Min[i][j], calc(Max[i-1][j-1], a[i], op[j]));
				}
				if(Min[i-1][j-1] != LLINF){
					Max[i][j] = max(Max[i][j], calc(Min[i-1][j-1], a[i], op[j]));
					Min[i][j] = min(Min[i][j], calc(Min[i-1][j-1], a[i], op[j]));
				}
			}
		}
		cout << Max[n][m] << endl;
	}
	return 0;
}