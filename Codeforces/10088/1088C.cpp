#include <bits/stdc++.h>
using namespace std;
const int INF = 0x3f3f3f3f;
const int MAXN = 1e5 + 7;
int a[MAXN];
int main(){
    // #ifndef ONLINE_JUDGE
    //     freopen("in.txt","r",stdin);
    //     freopen("out.txt","w",stdout);
    // #endif
    int n;
    cin >> n;
    for(int i=1;i<=n;++i)  {
        cin >> a[i];
        a[i] += 200000;
    }
    cout << n+1 << endl;
    cout <<"1 " << n << " 200000" << endl;
    for(int i=1;i<=n;++i){
        cout << "2 " << i << ' ' << (a[i] - i) << endl;
    }
    return 0;
}
