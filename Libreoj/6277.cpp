#include <bits/stdc++.h>
using namespace std;
const int INF = 0x3f3f3f3f;
const int MAXN = 500000 + 7;
int c[MAXN], a[MAXN];

int lowbit(int x){
    return x & (-x);
}
int sum(int x){
    int res = 0;
    while(x){
        res += c[x];
        x -= lowbit(x);
    }
    return res;
}
void add(int x, int d){
    while(x < MAXN){
        c[x] += d;
        x += lowbit(x);
    }
}
int main(){
    int n;
    int op, l, r, d;
    scanf("%d", &n);
    for(int i=1;i<=n;++i)   cin >> a[i];
    for(int i=1;i<=n;++i)   add(i, a[i]-a[i-1]);
    while(n--){
        scanf("%d %d %d %d", &op, &l, &r, &d);
        if(op == 0){
            add(l, d);
            add(r+1, -d);
        }
        else{
            printf("%d\n", sum(r));
        }
    }
    return 0;
}
