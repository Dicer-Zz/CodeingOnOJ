#include<stdio.h>
int qik(int n,int m){
	int base=1;
	n %= 10; 
	while(m!=1){
		if(m%2==1){
			base = base*n%10;
			n = n*n%10;
			m /= 2;
		}
		else{
			n = n*n%10;
			m /= 2;
		}
	}
	return n*base%10;
}
int main(){
	int n;
	while(scanf("%d",&n)==1){
	printf("%d\n",qik(n,n));
	}
	return 0;
}
