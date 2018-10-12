#include<stdio.h>
#include<algorithm>
using namespace std;
struct node{
	double w;
	double p;
}a[10000+5];
bool cmp(node x,node y){
	return x.p / x.w > y.p / y.w;
}
int main(){
	int n,m;
	while(~scanf("%d %d",&n,&m)){
		for(int i=0;i<n;i++){
			scanf("%lf %lf",&a[i].w,&a[i].p);
		}
		sort(a,a+n,cmp);
		double total=0;
		for(int i=0;i<n;i++){
			printf("%lf\n",a[i].p);
			if(a[i].w <= m){
				total += a[i].p;
				m -= a[i].w;
			}
		}
		printf("%.0lf\n",total);
	}
	return 0;
}
