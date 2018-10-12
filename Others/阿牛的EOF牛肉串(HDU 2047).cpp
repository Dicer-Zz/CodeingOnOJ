#include<stdio.h>

int main(){
	int n;
	long long a[45];
	a[1] = 3;a[2] = 8;
	for(int i=3;i<45;i++){
		a[i] = 2*(a[i-2]+a[i-1]);
	}
	while(~scanf("%d",&n)){
		printf("%lld\n",a[n]);
	}
	return 0;
}
