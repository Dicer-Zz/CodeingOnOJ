#include<stdio.h>
#include<string.h>
#include<algorithm>
using namespace std;
struct node{
	double p;
	double m;
}a[105];
bool cmp(node x,node y){
	if(x.p == y.p)
		return x.m > y.m;
	else
		return x.p > y.p;
}
int main(){
	double v;
	int n;
	while(scanf("%lf %d",&v,&n)==2){
		for(int i=0;i<n;i++)
		scanf("%lf %lf",&a[i].p,&a[i].m);
		sort(a,a+n,cmp);
		double total = 0;
		for(int i=0;i<n;i++){
			if(v >= a[i].m){
				total += a[i].p * a[i].m;
				v -= a[i].m;
			}
			else{
				total += v * a[i].p ;
				v = 0;
			}
		}
		printf("%.0lf\n",total);
	}
	return 0;
}
