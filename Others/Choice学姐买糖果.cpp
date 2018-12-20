#include<stdio.h>
int a[100020];
int main()
{
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
	scanf("%d",&a[i]);}
	int max=0,min=1e9,c,b;
	for(int i=0;i<n-1;i++)
	{if(a[i]<=a[i+1] && a[i+1]>=max)
	{max=a[i+1];
	c=i;
	}
	else if(a[i]>=a[i+1] && a[i]>=max){ 
	max=a[i];b=i;} 
	}
	for(int i=0;i<n-1;i++)
	{if(a[i]<=a[i+1] && a[i]<=min){ 
	min=a[i];b=i;} 
	else if(a[i]>=a[i+1] && a[i+1]>=min){ 
	min=a[i+1];b=i;} 
	}
	printf("%d %d\n",c+1,max);
	printf("%d %d\n",b+1,min);
	return 0;
 } 
