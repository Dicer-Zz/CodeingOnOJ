#include<bits/stdc++.h>
using namespace std;

int mp[55][55];
int main(){
    int T,n,m,x;
	scanf("%d",&T);
    while(T--){
    	int cnt = 0;
        scanf("%d %d",&n,&m);
        for(int i=1;i<=n;++i){
            for(int j=1;j<=m;++j){
                scanf("%d",&mp[i][j]);
                if(mp[i][j])    cnt++;
            }
        }
        int sum = 0 ;
        for(int i=1;i<=n;++i){
            for(int j=1;j<=m;++j){
                if(mp[i][j] > mp[i][j-1])   sum += mp[i][j]-mp[i][j-1];
            }
        }
        cnt += sum*2;
        sum  = 0;
        for(int j=1;j<=m;++j){
            for(int i=1;i<=n;++i){
                if(mp[i][j] > mp[i-1][j])   sum += mp[i][j]-mp[i-1][j];
            }
        }
        cnt += sum*2;
        printf("%d\n", cnt);
    }
    return 0;
}