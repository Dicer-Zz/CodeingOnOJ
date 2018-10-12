#include<stdio.h>

int main(){
	int t;
	scanf("%d",&t);
	int n,kase = 1;
	int a[10005],b[10005];
	while(t--){
		int sum = 0;
		scanf("%d",&n);
		for(int i=0;i<n;i++)
			scanf("%d",&a[i]);
		for(int i=0;i<n;i++)
			scanf("%d",&b[i]);
		for(int i=0;i<n;i++){
			if(a[i] + b[i] > 10)
				sum++;
		}
		printf("Case %d: ",kase++);	
		printf("%d\n",sum);
	}
	return 0;
}
