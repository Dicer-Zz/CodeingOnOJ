#include<stdio.h>
#include<algorithm> 
using namespace std;
long long a[12000];

bool cmp(long long x,long long y){
	return x>y;
}
int main(void){
	long long n,w;
	while(~scanf("%lld %lld\n",&n,&w)){
		long long sum = 0;
		for(int i=0;i<n;i++)
			scanf("%lld",&a[i]);
		sort(a,a+n,cmp);
		for(int i=0;i<n;i++){
			for(int j=i+1;j<n;j++){
				if(a[i]+a[j]<=w && a[i]!=-1 && a[j]!=-1){
					w = w-a[i]-a[j];
					a[i] = -1;
					a[j] = -1;
					sum++;
				}
			}
		}
		for(int i=0;i<n;i++){
			if(a[i]!=-1)	sum++;
		}
		printf("%lld\n",sum);
	}
	return 0;
}
