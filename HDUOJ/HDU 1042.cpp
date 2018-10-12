/* HDU 1042 大数N！1e14进制*/ 
/* RUNTIME 124MS           */
#include<bits/stdc++.h>
using namespace std;

const int maxn = 1e9;
void factorial(int n){
	long long a[10000] = {1};
	int digits=1,carry;
	
	for(int i=2;i<=n;i++){
		carry = 0;		//进位初始为零
		 
		for(int j=0;j<digits;j++){
			a[j] = a[j]*i + carry;
			carry = a[j]/1000000000000000;
			a[j] %= 1000000000000000; 
		}
		if(carry>0)
			a[digits++] = carry;
	}
	printf("%lld",a[digits-1]);
	for(int i=digits-2;i>=0;i--)
		printf("%015lld",a[i]);
	printf("\n");
}
int main(void){
	int n;
	while(cin>>n){
		factorial(n);
		//printf("Runtime: %lf\n",(double)(end-start)/CLOCKS_PER_SEC); 
	} 
	return 0;
}
