/*
* @Author: Dicer
* @Date:   2018-10-10 16:33:44
* @Last Modified by:   Dicer
* @Last Modified time: 2018-10-10 16:59:54
*/
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
const ll mod = 2147493647;
const int MAXN = 1e5;
const int MAXM = 1e5;

struct Matrix
{
    ll m[10][10];
};

Matrix Mul(Matrix a,Matrix b){
    Matrix res;
    int n=7;
    for(int i=1;i<=n;++i){
        for(int j=1;j<=n;++j){
            res.m[i][j] = 0;
        }
    }
    for(int i=1;i<=n;++i){
        for(int j=1;j<=n;++j){
            for(int k=1;k<=n;++k){
                res.m[i][j] = (res.m[i][j]%mod+a.m[i][k]*b.m[k][j]%mod)%mod;
                // printf("%d\n",res.m[i][j] );
            }
        }
    }
    return res;
}

void MatrixQuickPower(ll n,ll a, ll b){
    Matrix Mat,res;
    clr(res.m, 0);
    for(int i=1;i<10;++i)	res.m[i][i] = 1;
	Mat.m[1][1] = 1;Mat.m[1][2] = 2;Mat.m[1][3] = 1;Mat.m[1][4] = 4;Mat.m[1][5] = 6;Mat.m[1][6] = 4;Mat.m[1][7] = 1;
	Mat.m[2][1] = 1;Mat.m[2][2] = 0;Mat.m[2][3] = 0;Mat.m[2][4] = 0;Mat.m[2][5] = 0;Mat.m[2][6] = 0;Mat.m[2][7] = 0;
	Mat.m[3][1] = 0;Mat.m[3][2] = 0;Mat.m[3][3] = 1;Mat.m[3][4] = 4;Mat.m[3][5] = 6;Mat.m[3][6] = 4;Mat.m[3][7] = 1;
	Mat.m[4][1] = 0;Mat.m[4][2] = 0;Mat.m[4][3] = 0;Mat.m[4][4] = 1;Mat.m[4][5] = 3;Mat.m[4][6] = 3;Mat.m[4][7] = 1;
	Mat.m[5][1] = 0;Mat.m[5][2] = 0;Mat.m[5][3] = 0;Mat.m[5][4] = 0;Mat.m[5][5] = 1;Mat.m[5][6] = 2;Mat.m[5][7] = 1;
	Mat.m[6][1] = 0;Mat.m[6][2] = 0;Mat.m[6][3] = 0;Mat.m[6][4] = 0;Mat.m[6][5] = 0;Mat.m[6][6] = 1;Mat.m[6][7] = 1;
	Mat.m[7][1] = 0;Mat.m[7][2] = 0;Mat.m[7][3] = 0;Mat.m[7][4] = 0;Mat.m[7][5] = 0;Mat.m[7][6] = 0;Mat.m[7][7] = 1;
    while(n){
        if(n&1) res = Mul(res,Mat);
        n >>= 1;
        Mat = Mul(Mat,Mat);
    }
    ll ans = 0;
    for(int i=1;i<=7;++i){
    	if(i == 1){ ans += res.m[1][i]*b ;ans %= mod;}
    	if(i == 2){ ans += res.m[1][i]*a ;ans %= mod;}
    	if(i == 3){ ans += res.m[1][i]*16;ans %= mod;}
    	if(i == 4){ ans += res.m[1][i]*8 ;ans %= mod;}
    	if(i == 5){ ans += res.m[1][i]*4 ;ans %= mod;}
    	if(i == 6){ ans += res.m[1][i]*2 ;ans %= mod;}
    	if(i == 7){ ans += res.m[1][i]*1 ;ans %= mod;}
    }
    cout << (ans + mod)%mod << endl;
}

int main(int argc, char const *argv[])
{
	int T;
	cin >> T;
	ll N, a, b;
	while(T--){
		cin >> N >> a >> b;
		if(N == 1)	cout << a << endl;
		else if(N == 2)	cout << b << endl;
		else{
			MatrixQuickPower(N-2, a, b);
		}
	}
	return 0;
}