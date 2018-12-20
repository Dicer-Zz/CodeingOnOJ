#include <bits/stdc++.h>
using namespace std;
const int INF = 0x3f3f3f3f;
const int MAXN = 1e5 + 7;
int a[MAXN];
int main(){
    #ifndef ONLINE_JUDGE
        freopen("in.txt","r",stdin);
        freopen("out.txt","w",stdout);
    #endif
    int n, k;
    cin >> n >> k;
    for(int i=1;i<=n;++i)   cin >> a[i];
    sort(a+1, a+1+n);
    int flag = 0;
    for(int i=1;i<=k;++i){
        if(i > n){
            cout << 0 << endl;
            continue;
        }
        if(a[i] == flag){
            k++;
            continue;
        }
        cout << a[i]-flag << endl;
        flag = a[i];
    }
    return 0;
}
