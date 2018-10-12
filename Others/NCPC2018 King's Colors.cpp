/*---------------------------------

 @Author:   Dicer
 @DateTime: 2018-10-09 21:52:04

---------------------------------*/

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
const int MAXN = 3e3;
const int MAXM = 3e3;
int n,m,tot;
int ans[MAXN],f[MAXN][MAXN];
int to[MAXN*2],net[MAXN*2],head[MAXN*2];
void add(int u,int v){
    to[++tot]=v;net[tot]=head[u];head[u]=tot;
    to[++tot]=u;net[tot]=head[v];head[v]=tot;
}
void dfs(int now,int fa){
    for(int i=head[now];i;i=net[i])
        if(to[i]!=fa)
            dfs(to[i],now);
    for(int i=1;i<=m;i++)
        if(f[now][i]){
            for(int j=head[now];j;j=net[j])
                if(to[j]!=fa)
                    f[now][i]=1LL*f[now][i]*(ans[to[j]]-f[to[j]][i])%mod;
            while(f[now][i]<0)    f[now][i]+=mod;
            ans[now]=(ans[now]+f[now][i])%mod;
        }
}
int main(){
    scanf("%d%d",&n,&m);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            f[i][j]++;
        }
    }
    for(int i=1;i<n;i++){
    	int x;
    	scanf("%d", &x);
        add(i+1,x+1);
    }
    add(0,1);
    dfs(0,0);
    printf("%d\n",ans[1]);
    clr(f, 0); clr(ans, 0);
    for(int i=1;i<=n;i++){
        for(int j=1;j<m;j++){
            f[i][j]++;
        }
    }
    dfs(0,0);
    printf("%d\n",m*ans[1]);
}