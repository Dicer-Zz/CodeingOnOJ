#include<stdio.h>
int main()
{
	int n,sum,a;
	while(scanf("%d",&n),n)
	{
		sum=0;a=0;
		for(int i=1;;i++){
			for(int j=1;j<=i && n-a>0;j++){
				sum += i;a++;
			}
			if(a>=n)
			break;
		}
		printf("%d %d\n",n,sum);
	}
 } 
