#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	if(n%2 == 0){
		n /=2;
		while(n--){
			printf("I love or I hate or");
			if(n>1)
			printf(" ");
		}printf("it");
	}
	else{if(n=1)
		printf("I love it");
		n = (n-1)/2;
		while(n--){
			printf("I love or I hate or");
			if(n>1)
			printf(" ");
			printf("I hate or");
		} 
	}
	return 0;
 } 
