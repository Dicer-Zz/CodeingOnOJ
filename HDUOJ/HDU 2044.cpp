#include<bits/stdc++.h>

int main(){
	long long f[55];
	f[1] = 0;f[2] = 1;f[3] = 2;
	for(int i=4;i<55;i++)
		f[i] = f[i-1]+f[i-2];
	int n,a,b;
	scanf("%d",&n);
	while(n--){
		scanf("%d %d",&a,&b);
		printf("%lld\n",f[b-a+1]);
	}
	return 0;
}
