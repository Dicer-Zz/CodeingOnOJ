#include<stdio.h>

int fib_num[1000];

int main(){
	int n;
	scanf("%d",&n);
	fib_num[0]=1;
	fib_num[1]=1;
	for(int i=2;i<n;i++){
		fib_num[i] = fib_num[i-1] + fib_num[i-2];
	//	printf("%d\n",fib_num[i]);
	}
	for(int i=0;i<n;i++){
		printf("第%d个斐波那契数值为:%d\n",i+1,fib_num[i]);
	}
}
