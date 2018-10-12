//
// Created by Yishui on 2018/8/3.
//
#include <bits/stdc++.h>

using namespace std;

const int MAXN = (int)5e2+10;
const int mod = (int)1e9+7;

int dp[110][110];
int arr[110];
int main() {
    freopen("in.txt", "r", stdin);
    int n, k, T;
    cin >> T;
    while(T--) {
        cin >> n >> k;
        memset(dp, 0, sizeof dp);
        for(int i = 1; i <= n; ++i) {
            cin >> arr[i];
            dp[i][1] = 1;
        }
        for(int i = 1; i <= n; ++i) {
            for(int j = 2; j <= i; ++j) {
                for(int z = 1; z < i; ++z) {
                    if(arr[z] < arr[i])
                        dp[i][j] = (dp[i][j]+dp[z][j-1]) % mod;
                }
            }
        }
        int ans = 0;
        for(int i = 1; i <= n; ++i) {
            ans = (ans + dp[i][k]) % mod;
        }
        cout << ans << endl;
    }
    return 0;
}
