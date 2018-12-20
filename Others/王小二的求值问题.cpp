#include<stdio.h>
int a[1000020];
int main()
{
	int n;
	int max1,max2;
	while(scanf("%d",&n) != EOF){
	for(int i=0;i<n;i++)
	scanf("%d",&a[i]);
	if(a[0]>=a[1]){
	max1 = a[0];
	max2 = a[1];}
	else{ 
	max1 = a[1];
	max2 = a[0];}
	for(int i=1;i<n;i++){
		if(a[i]>=a[i+1] && a[i]>=max2)
		max2 = a[i];
		else if(a[i]<=a[i+1] && a[i+1]>=max2)
		max2 = a[i+1];
		if(max1<max2){
			int t;
			t=max2;
			max2=max1;
			max1=t;
		}
	}printf("%d",max2);
	}
	return 0;
 } 
