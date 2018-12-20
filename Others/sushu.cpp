#include<stdio.h>
#include<string.h>
bool check[1000000];
int prime[1000000],sum[1000000];
int main()
{
	int count;
	memset(check,0,sizeof(check));
	for(int i=2;i<=100;i++){
		if(!check[i])
		prime[count++]=i;
		for(int j=i+i;j<=100;j+=i)
		check[j]=1;
	}
	for(int i=0;i<count;i++){
	sum[i]=prime[i]/100000+prime[i]/10000%10
	+prime[i]/1000%100+prime[i]/100%1000
	+prime[i]/10%10000+prime[i]%100000;
	printf("%d %d\n",prime[i],sum[i]);
	}
	return 0;
}
