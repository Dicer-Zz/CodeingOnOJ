#include<stdio.h>
int main()
{
	int n,m,t,k,sum=0;
	scanf("%d%d",&n,&m);
	t = n;
	while(n--){
		scanf("%d",&k);
		sum +=86400 - k;
		if(sum >= m){
		printf("%d",t-n);
		break;
		}
	}
	return 0;
 } 
