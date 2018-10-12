#include<stdio.h>
#include<algorithm>
using namespace std;
const int maxn=200000;

int a[maxn],b[maxn],c[maxn];
int main(){
	int n,T,x;
	scanf("%d",&T);
	while(T--){
		x = 0; 
		scanf("%d",&n);
		for(int i=0;i<n;i++){
			scanf("%d",&a[i]);
			x ^= a[i];
		}
		for(int i=0;i<n;i++){
			scanf("%d",&b[i]);
			x ^= b[i];
		}
		for(int i=0;i<n;i++){
			c[i] = a[i] ^ x;
		}
		sort(c,c+n);
		int flag = 1;
		for(int i=0;i<n;i++){
			if(c[i] != b[i]){
				flag = 0;
				break;
			}
		}
		if(flag)	printf("%d\n",x);
		else printf("-1\n"); 
	}
	return 0;
} 
