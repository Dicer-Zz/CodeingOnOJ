#include<stdio.h>
int main()
{
	int a,b;
	scanf("%d",&a);
	b = 1;
	while(a--){
		for(int i=0;i<a;i++)
		printf(" ");
		for(int i=0;i<b;i++)
		printf("*");
		b = b+2;
		printf("\n");
	}
	return 0;
 } 
