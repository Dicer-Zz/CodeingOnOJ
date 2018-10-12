#include<stdio.h>
#include<string.h>
#include<algorithm>
using namespace std;
struct node{
	double j;
	double f;
}a[1005];
bool cmp(node x,node y){
	if(x.j/x.f == y.j/y.f)
		return x.j > y.f;
	else
		return x.j/x.f > y.j/y.f;
}
int main(){
	int m,n;
	while(scanf("%d %d",&m,&n)==2 && m+n != -2){
		for(int i=0;i<n;i++)
		scanf("%lf %lf",&a[i].j,&a[i].f);
		sort(a,a+n,cmp);
		double  total = 0;
		for(int i=0;i<n;i++){
			if(m >= a[i].f){
				total += a[i].j;
				m -= a[i].f;
			}
			else{
				total += m * a[i].j / a[i].f;
				m =0;
			}
		}
		printf("%.3lf\n",total);
	}
	return 0;
}
