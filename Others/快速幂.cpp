#include<stdio.h>

int power(int a,int b){
	int base=1;
	a %= 1000;
	while(b > 1){
		if(b % 2 == 1){
			base = base*a%1000;
			a = (a*a)%1000;
			b /= 2;
		}
		else {
			a = (a*a)%1000;
			b /= 2;
		}
	}
	return a*base%1000;
}
int main(){
	int n,m;
	while(scanf("%d %d",&n,&m) && n+m != 0){
		printf("%d\n",power(n,m));
	}
	return 0;
} 
