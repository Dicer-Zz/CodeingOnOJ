#include<stdio.h>

int gcd(int a,int b){
	return b == 0 ? a : gcd(b,a%b); 
}

int main(){
	printf("%d\n",gcd(3,5));
	return 0;
} 