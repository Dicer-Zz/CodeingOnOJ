#include<stdio.h>
#include<algorithm>
using namespace std;
int a[3005];
int b[5000000];
int cmp(int x,int y){
	if(x>=y)
	return 1;
	else
	return 0; 
}
int main(){
	int n,m;
	while(scanf("%d%d",&n,&m)==2){
		for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
		sort(a,a+n,cmp); 
		int total=0;
		for(int i=0;i<m;i++){
			for(int j=i+1;j<m;j++){
				b[total++] = a[i] + a[j];
			}
		}
		sort(b,b+total,cmp);
		for(int i=0;i<m;i++)
		printf("%d%c",b[i],i<m-1?' ':'\n'); 
	}
	return 0;
} 
