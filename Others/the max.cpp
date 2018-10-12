#include<stdio.h>
#include<algorithm>
using namespace std;
long long a[105];
int main(){
	int n;
	while(scanf("%d",&n)&&n){
		for(int i=0;i<n;i++){
			scanf("%d",&a[i]);
		}
		sort(a,a+n);
		long long sum=a[n-1]*(2009-n+1);
		for(int i=0;i<n-1;i++) 
		sum+=a[i];
		printf("%lld\n",sum);
	}
	return 0;
}
