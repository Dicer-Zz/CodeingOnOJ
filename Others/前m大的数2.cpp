#include<stdio.h>
#include<algorithm>
#include<string.h>
using namespace std;
int pre[10005];
int a[3005];
int cmp(int x,int y){
	if(x>=y)
	return 1;
	else 
	return 0;
}
int main(){
	int n,m;
	memset(pre,0,sizeof(pre));
	while(scanf("%d%d",&n,&m)==2){
		for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
		sort(a,a+n,cmp);
		for(int i=0;i<m;i++){
			for(int j=i+1;j<m;j++){
				pre[a[i]+a[j]]++; 
			}
		}
		for(int i=10000;m>0;i--){
			while(m&&pre[i]){
				printf("%d%c",i,m!=1?' ':'\n');
				pre[i]--;
				m--;
			}
		}
	}
	return 0;
} 
