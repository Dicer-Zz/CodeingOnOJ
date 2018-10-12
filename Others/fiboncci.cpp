#include<stdio.h>
#include<string.h>
using namespace std;

long long power(int n){
	long long base = 1;
	for(int i=0;i<n;i++){
		base *= 2;
	}
	return base;
}
int main(){
	long long fib[90];
	fib[0]=1;
	fib[1]=2;
	for(int i=2;i<91;i++){
		fib[i] = fib[i-1]+fib[i-2];
	}			//Ô¤´¦Àí 
	int t;
	int fib_radix[10000];
	long long n;
	scanf("%d",&t);
	while(t--){
		memset(fib_radix,0,sizeof(fib_radix));
		scanf("%lld",&n);
		int fib_sum = 0,i;
		for(i=0;;i++){
			fib_sum += fib[i];
			if(fib_sum > n)	break;
		}
		int flag = i;
		while(n > 0){
			if(n >= fib[i]){
				n -= fib[i];
				fib_radix[i] = 1;
			}
			else fib_radix[i] = 0;
			i--;
		}
		/*for(i=0;i<=flag;i++){
			printf("%d",fib_radix[i]);
		}
		printf("\n");*/
		long long sum = 0;
		for(int i=0;i<=flag;i++){
			sum += power(i)*fib_radix[i];
		}
		printf("%lld\n",sum);
	}
	return 0;
}
