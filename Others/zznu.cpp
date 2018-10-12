#include<bits/stdc++.h>
const int maxn=1e6;
long long f[maxn];

int main(void){
	int t,n;
	long long sum;
	f[0] = 0;
	for(int i=1;i<maxn;i++){
		sum = 0;f[i] = 0;
		double sqrti = sqrt(i);
		for(int j=1;j<=sqrti;j++){
			if(i % j == 0){
				if(j!=sqrti)	f[i] += (j + i/j);
				else	f[i] += j;
			}
		}
	}
	//printf("%lld %lld %lld\n",f[1],f[2],f[3]);
	scanf("%d",&t);	
	while(t--){
		scanf("%d",&n);
		sum = 0;
		for(int i=1;i<=n;i++)
			sum += f[i];
		printf("%lld\n",sum); 
	}
	
	return 0;
}
