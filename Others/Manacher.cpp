#include <stdio.h>
#include <string.h>
#include <algorithm>
using namespace std;
const int N = 1e6;	
int s[N],sn[N],n;
int p[N];
void init(){
	sn[0] = -1;
	sn[1] =  0;
	int j=2;
	for(int i = 0 ;i < n ;++i){
		sn[j++] = s[i];
		sn[j++] = 0;
	}
}
int Manacher(){
	init();
	int id = 0,mx = 0,ans = 0;	
	for(int i=1;i<=2*n+1;++i){
		p[i] = (mx > i)?min(p[2*id-i],mx-i):1;
		while(sn[i+p[i]] == sn[i-p[i]] && sn[i+p[i]] <= sn[i+p[i]-2] )	p[i]++;
		if(mx < i + p[i]){
			id = i;
			mx = i + p[i];
		}
		ans = max(ans,p[i]-1);
	}
	return ans;
}
int main(int argc, char const *argv[])
{
	int T;
	scanf("%d",&T);
	while(T--){
		scanf("%d",&n);
		for(int i=0;i<n;++i)	scanf("%d",&s[i]);
		printf("%d\n",Manacher());
	}
	return 0;
}