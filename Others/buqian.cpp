#include<stdio.h>

int main(){
	int a[101];
	int t,n,m;
	scanf("%d",&t);
	while(t--){
		a[0] = 0;
		scanf("%d %d",&n,&m);
		for(int i=1;i<=n;i++)
			scanf("%d",&a[i]);
		if(n <= m)
			printf("100\n");
		else{
			int num = n - m;
			int max = 0;
			for(int i=1;i<=num;i++){
				if((a[i+m]-a[i-1]) > max)
					max = a[i+m] - a[i-1];
			}
			printf("%d\n",max-1);
		}
	}
	return 0;
} 
