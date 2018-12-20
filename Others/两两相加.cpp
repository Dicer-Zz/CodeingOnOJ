#include<stdio.h>
int a[100020];
int main()
{	int n;
	scanf("%d",&n);	
	for(int i = 0;i<n;i++)
	scanf("%d",&a[i]);
	int sum = 0;
	int i=0;
	for(;i<n-1;i++){
		for(int j=i;j<n-1;j++){
			sum += a[i] + a[j+1];
		}	
	}
	printf("%d\n",sum);
//	for(int i = 0;i<n;i++)
//	printf("%d\n",a[i]);
	return 0;
}
