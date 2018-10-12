#include<stdio.h>
#include<algorithm>
using namespace std;
struct node{
	double p;
	double w;
	double cost;
}a[1005];
int cmp(node x,node y){
	return x.p < y.p;
}
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		double funds;
		int n;
		scanf("%lf %d",&funds,&n);
		for(int i=0;i<n;i++){
			scanf("%lf %lf",&a[i].p,&a[i].w);
			a[i].cost = a[i].w * a[i].p;
		}
		sort(a,a+n,cmp);
		double sum=0;
		for(int i=0;i<n;i++){
			if(funds >= a[i].cost){
				sum += a[i].w;
				funds -= a[i].cost;
			}
			else{
				sum += funds / a[i].p;
				funds = 0;
			}
		}
		printf("%.2lf\n",sum);
	}
	return 0;
} 
