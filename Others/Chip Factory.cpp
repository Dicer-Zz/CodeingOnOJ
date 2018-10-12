#include <bits/stdc++.h>
using namespace std;
int a[1010];
int main(int argc, char const *argv[])
{
	int n,T;
	scanf("%d",&T);
	while(T--){
		scanf("%d",&n);
		for(int i=1;i<=n;++i)	scanf("%d",&a[i]);
		int ans = 0;
		for(int i=1;i<=n;++i){
			for(int j=i+1;j<=n;++j){
				for(int k=1;k<=n;++k){
					if(k == i || k == j)	continue;
					ans = max(ans,(a[i]+a[j])^a[k]);
				}
			}
		}
		printf("%d\n", ans);
	}
	return 0;
}