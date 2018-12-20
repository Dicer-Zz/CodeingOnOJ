#include<stdio.h>
int main()
{
	int t,n;
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
		int i=n%2;
		if(n=1)
		printf("1\n");
		else if(i=1)
		{n -= 1;
		n /= 2;
		}
		else n /=2;
		printf("%d\n",n);	
	}return 0;
}
