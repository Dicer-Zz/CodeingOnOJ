#include<stdio.h>
#include<string.h>
using namespace std;
const int max = 1e4+10;
int p[max];
int main(){
	memset(p,0,sizeof(p));
	p[0]=p[1]=1;
	for(int i=2;i<max;i++){
		if(p[i]==0)
		for(int j=2;i*j<max;j++){
			p[i*j]=1;
		} 
	}
	int n,ans;
	while(scanf("%d",&n)&&n){
		ans=0;
		for(int i=1;i<(n+1)/2;i++){
			if(p[i]==0&&p[n-i]==0)
			ans++;
		}
		printf("%d\n",ans);
	}
	return 0;
} 
