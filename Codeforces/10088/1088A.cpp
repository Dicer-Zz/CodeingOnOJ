#include <bits/stdc++.h>
using namespace std;
const int INF = 0x3f3f3f3f;
const int MAXN = 1e5 + 7;
int main(){
    #ifndef ONLINE_JUDGE
        freopen("in.txt","r",stdin);
        freopen("out.txt","w",stdout);
    #endif
    int x;
    cin >> x;
    if(x == 1)  puts("-1");
    else	printf("%d %d\n",x, x);
    return 0;
}
