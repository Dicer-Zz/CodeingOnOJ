#include<stdio.h>

int main(){
	int n;
	int sum0 = 0,sum1 = 0;
	char s;
	scanf("%d",&n);
	getchar();
	for(int i=0;i<n;i++){
		scanf("%c",&s);
		if(s=='1')	sum1++;
		else sum0++;
	}
	if(sum1 == 0)	printf("0\n");
	else{
		printf("1");
		for(int i=0;i<sum0;i++)
			printf("0");
		printf("\n");
	}
	return 0;
}
