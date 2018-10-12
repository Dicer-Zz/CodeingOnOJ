#include<bits/stdc++.h>
#define maxn 1000010
typedef long long ll;
using namespace std;
int a[11000];
int main(){
    int T,n,x,mmin,mmax;
    scanf("%d",&T);
    while(T--){
    	memset(a,0,sizeof(a));
    	mmin = 10000;mmax = 1;
		scanf("%d",&n);
		for(int i=1;i<=n;++i){
			scanf("%d",&x);
			a[x]++;
			mmax = max(mmax,x);
			mmin = min(mmin,x);
		}
		if(n ==  4 && a[1] == 2 && a[10000] == 2){
			printf("%d %d %d %d\n",1,1,10000,10000);
			continue;
		}
		double res = 11000;
		int flag = 0,res1 = 0,res2 = 0,flag2 = 1;
		for(int i=mmin;i<=mmax;++i){
			if(a[i] >= 4){
				printf("%d %d %d %d\n",i,i,i,i);
				flag2 = 0;
				break;
			}
			if(a[i]>=2 && flag){
//				printf("%d %d\n",i,flag);
				if(res > ((i*i*1.0 - flag*flag*1.0)/(i*flag*1.0))){
					res1 = i;
					res2 = flag;
					res = ((i*i*1.0 - flag*flag*1.0)/(i*flag*1.0));
				}
				flag = i;
			}
			if(a[i]>=2 && !flag){
				flag = i;
			}
		}
		if(flag2){
			printf("%d %d %d %d\n",res1,res1,res2,res2);
		}
	}
    return 0;
}


