#include<stdio.h>
int main()
{
	int n,a,b,sum;
	while(n--){
		sum = 0;
		scanf("%d",&a);
		for(int i=0;i<a;i++){
			scanf("%d",&b);
			sum += b;
		}
		printf("%d\n",sum);
	}
	return 0;
 } 
