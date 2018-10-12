#include <bits/stdc++.h>
using namespace std;
#define rep(i, j, n)    for(int i=j;i<n;++i)
const int N = (int)2e5+10;
typedef long long ll;
int n,m,a[N],t[N],dp[N];
int main(int argc, char const *argv[])
{
    while(scanf("%d %d",&n,&m) && n + m ){
        memset(dp, 0, sizeof dp);
        rep(i, 0, n)    scanf("%d",&a[i]);
        rep(i, 0, n)    scanf("%d",&t[i]);
        dp[0] = 1;
        rep(i, 0, n){
            for(int j = 1 ; t[i]; j <<= 1){
                ll k = 1LL * min(j, t[i]) * a[i];
                t[i] -= min(j, t[i]);
                for(int u = m ; u >= k; --u){
                    dp[u] |= dp[u-k];
                }
            }
        }
        int ans = 0;
        rep(i, 1, m + 1)    ans += dp[i];
        printf("%d\n", ans);     
    }
    return 0;
}