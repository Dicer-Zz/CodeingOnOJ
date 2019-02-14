/*---------------------------------

 @Author:   Dicer
 @DateTime: 2019-01-23 22:37:52

---------------------------------*/

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
#define debug(...) cerr<<"["<<#__VA_ARGS__":"<<(__VA_ARGS__)<<"]"<<"\n"
inline ll qpow(ll a,ll b,ll mod){ll res=1;while(b){if(b&1)res = (res*a)%mod;a=(a*a)%mod;b>>=1;}return res;}
const double eps = 1e-8;
const int INF = 0x3f3f3f3f;
const int mod = 1e9+7;
const int MAXN = 2e5 + 7;

int main(int argc, char const *argv[])
{
    #ifndef ONLINE_JUDGE
        freopen("in.txt", "r", stdin);
        freopen("out.txt", "w", stdout);
    #endif
    
    int T;
    cin >> T;
    while(T--){
        int l1, r1, l2, r2;
        cin >> l1 >> r1 >> l2 >> r2;
        if(l1 == r1){
            if(r2 == r1)    cout << l1 << ' ' << r2-1;
            else    cout << l1 << ' ' << r2;
        } else{
            if(r1 != r2)    cout << r1 << ' ' << r2;
            else    cout << r1-1 << ' ' << r2;
        }
    }
    return 0;
}