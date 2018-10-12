#include <stdio.h>
#include <iostream>
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
inline int read(){int r=0;char c=getchar();while(c<'0'||c>'9') {c=getchar();}while(c>='0'&&c<='9') {r=r*10+c-'0';c=getchar();}return r;}
inline ll readll(){ll r=0;char c=getchar();while(c<'0'||c>'9') {c=getchar();}while(c>='0'&&c<='9') {r=r*10+c-'0';c=getchar();}return r;}
const int INF = 0x3f3f3f3f;
const int mod = 1e9+7;
const int MAXN = 1e3+10;
const int MAXM = 1e5;

int main(int argc, char const *argv[])
{
	ios::sync_with_stdio(false);
	int n;
	while(cin >> n && n){
		double p;
		cin >> p;
		printf("%.3f %.3f\n", n/p, ((n*n+n)/p-n)/p);
	}
	return 0;
}