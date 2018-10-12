#include<bits/stdc++.h>
#define maxn 1000010
typedef long long ll;
using namespace std;
int a[11000];
int main(){
    int T,n,x,l,r,mid;
    scanf("%d",&T);
    while(T--){
    	memset(a,0,sizeof(a));
    	l = 10000;r = 1;
		scanf("%d",&n);
		for(int i=1;i<=n;++i){
			scanf("%d",&x);
			a[x]++;
			r = max(r,x);
			l = min(l,x);
		}
		double res = 11000;
		int flag = 0,res1 = 0,res2 = 0,flag2 = 1;
		while(l<=r){
			mid = (l+r)/2;
			
		}
		if(flag2){
			printf("%d %d %d %d\n",res1,res1,res2,res2);
		}
	}
    return 0;
}


