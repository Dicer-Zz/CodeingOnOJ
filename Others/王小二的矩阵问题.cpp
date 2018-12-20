#include<stdio.h>
long long a[110][110];
int main()
{
	int n;
	while(scanf("%d",&n)!=EOF){
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++)
			scanf("%lld",&a[i][j]);
		}
		long long  x,sum = 0;
		for(int j=0;j<n;j++){
			x=1000000000;
			for(int i=0;i<n;i++){
			if(x > a[i][j])
			x = a[i][j];
		}
		sum += x;
	}printf("%lld\n",sum);
	}
	return 0;
}
