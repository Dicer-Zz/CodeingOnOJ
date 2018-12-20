#include<stdio.h>
int a[1005],b[1005];
int main()
{
	int T,n,m;
	scanf("%d",&T);
	while(T--)
	{
		int min,ans,sum;
		scanf("%d%d",&n,&m);
		for(int i=0;i<m;i++){
		scanf("%d",&a[i]);	
		}
		for(int i=0;i<m;i++){
		scanf("%d",&b[i]);	
		}
		while(n>0){
			for(int i=0;i<m-1;i++){
				if(a[i]>=a[i+1] && b[i+1]!=0){
				min = a[i+1];
				ans = b[i+1];
				}				
				else if(a[i]<a[i+1]&&b[i]!=0){
				min = a[i];
				ans = b[i];
				}		
			}
			for(int i =0;ans>0;i++){
				if(n-=min <0)
				break;
				n -= min;
				sum ++;
				ans --;
			}
		}
		printf("%d %d\n",sum,n);
	}
	return 0;
}
