#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
const int INF = 0x3f3f3f3f;
const int mod = 1e9 + 7;
const int MAXN = 1e5 + 7;
struct EDGE
{
    int u, v;
    ull w;
};

ull k1, k2;
int root[MAXN], n, m;
vector<EDGE> G;
void add(int u, int v, ull w)
{
    G.push_back((EDGE){u, v, w});
}
bool cmp(EDGE a, EDGE b)
{
    return a.w < b.w;
}

int find(int x)
{
    if (x == root[x])
        return x;
    else
        return root[x] = find(root[x]);
}
void kruskal()
{
    for (int i = 1; i <= n; ++i)
        root[i] = i;
    sort(G.begin(), G.end(), cmp);
    ull ans = 0;
    int res = 1;
    for (int i = 0; i < (int)G.size(); ++i)
    {
        int fx = find(G[i].u);
        int fy = find(G[i].v);
        if (fx != fy)
        {
            res++;
            root[fx] = fy;
            ans += G[i].w%mod;
            ans %= mod;
        }
    }
    if(res == n)    printf("%llu\n", ans);
    else	printf("0\n");
}

ull xorShift128Plus(){
    ull k3 = k1, k4 = k2;
    k1 = k4;
    k3 ^= k3 << 23;
    k2 = k3 ^ k4 ^ (k3 >> 17) ^ (k4 >> 26);
    return k2 + k4;
}
void gen(){
    G.clear();
    scanf("%d%d%llu%llu", &n, &m, &k1, &k2);
    int u, v;
    ull w;
    for(int i=1;i<=m;++i){
        u = xorShift128Plus() % n + 1;
        v = xorShift128Plus() % n + 1;
        w = xorShift128Plus();
        add(u, v, w);
    }
}
int main(){
    int T;
    cin >> T;
    while(T--){
        gen();
        kruskal();
    }
    return 0;
}
