#include<stdio.h>
int a[45];
int main()
{
	int T,m,n;
	scanf("%d",&T);
	while(T--){
		scanf("%d%d",&m,&n);
		for(int i=0;i<m+n;i++)
		scanf("%d",&a[i]);
		printf("%d",a[0]); 
		for(int i=1;i<m+n;i++)
		printf(" %d",a[i]);
		printf("\n");
	}
	return 0;
}
