#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int N = (int)1e6 + 11;
const int MAX = (int)2e6;

int sum[MAX];
int main(){
   // freopen("in.txt", "r", stdin);
   // freopen("out.txt", "w", stdout);
    int _;
    for(scanf("%d", &_); _; _--){
        memset(sum, 0, sizeof(sum));
        int n, k; scanf("%d%d", &n, &k);
        int mx = 0;
        for(int i = 1; i <= n; i++){
            int a; scanf("%d", &a);
            sum[a]++;
        }
        for(int i = 1; i <= MAX; i++) sum[i] += sum[i - 1];
        ll ans = 0;
        for(int i = 2; i * 1ll * k <= MAX; i++)
            ans += (sum[(i * k) - 1] - sum[(i - 1) * k - 1]) * (i - 1);
        printf("%lld\n", ans);
    }
    return 0;
}
