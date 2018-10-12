#include<stdio.h>
#include<iostream>
using namespace std;

void large_num_factorial(int n){
	int a[20001];
	int digital = 1,carry;
	a[0] = 1;
	for(int i=2;i<=n;i++){
		carry = 0;
		for(int j=0;j<digital;j++){
			a[j] = a[j] * i + carry;
			carry = a[j] / 10000;
			a[j] %= 10000;
		}
		if(carry > 0)   a[digital++] = carry;
	}
	printf("%d",a[digital-1]);
	for(int i=digital-2;i>=0;i--)
		printf("%04d",a[i]);
	printf("\n");
	//printf("%d\n",digital);
}
int main(){
	int n;
	while(cin >> n)
		large_num_factorial(n);
	return 0;
}
