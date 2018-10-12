#include<bits/stdc++.h>
using namespace std;

int main(){
	int t,n,m;
	long long a[22],b[22];
	a[0] = 0;a[1] = 0;a[2] = 1;a[3] = 2;
	for(int i=4;i<22;i++)
		a[i] = (i-1)*(a[i-1]+a[i-2]);
	b[0] = 1;b[1] = 1;b[2] = 2;
	for(int i=3;i<22;i++)
		b[i] = b[i-1]*i;
	scanf("%d ",&t);
	while(t--){
		scanf("%d %d",&n,&m);
		printf("%lld\n",b[n]/b[m]/b[n-m]*a[m]);
	}
	return 0;
}
