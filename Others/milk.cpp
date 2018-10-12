#include<stdio.h>
#include<algorithm>
#define inf 0x3fffffff;
using namespace std;

struct node{
	char n[105];
	int  p;
	int  v;
	double  pd;
}a[105];
int cmp(node x,node y){
	return x.pd < y.pd;
}

int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		for(int i=0;i<n;i++){
			scanf("%s %d %d",&a[i].n,&a[i].p,&a[i].v);
			if(a[i].v < 200){
				a[i].pd = inf;
			}
			else{
				a[i].v > 1000?a[i].v = 5:a[i].v /= 200;
				a[i].pd = (a[i].p/1.0)/(a[i].v/1.0);
			}	
		}
		sort(a,a+n,cmp);
		printf("%s\n",a[0].n);
	}
	return 0;
}
