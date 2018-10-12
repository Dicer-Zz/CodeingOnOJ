#include<stdio.h>
#include<algorithm> 
using namespace std;
const int max = 1e7;
int s[3005];
int p[5000000];
int cmp(int n,int m){
	if(n>=m)
	return 1;
	else
	return 0;
}
int main(){
	int n,m;
	while(scanf("%d%d",&n,&m)==2){
		int ans=0;
		for(int i=0;i<n;i++)
		scanf("%d",&s[i]);
		for(int i=0;i<n;i++){
			for(int j=i+1;j<n;j++){
				p[ans++] = s[i]+s[j];
			}
		}
		sort(p,p+ans,cmp);
		printf("%d",p[0]);
		for(int i=1;i<m;i++){
			printf(" %d",p[i]);
		}
		printf("\n");
	}
	return 0;
}
