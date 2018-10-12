#include<stdio.h>

int gcd(int a,int b){
	return b == 0?a:gcd(b,a%b);
}
int main(){
	int n;
	int a,b;
	while(~scanf("%d",&n)){
	//	printf("%d\n",gcd(a,b));
		scanf("%d",&a);
		n -= 1;
		while(n--){
			scanf("%d",&b);
			a = a/gcd(a,b)*b;
		}
		printf("%d\n",a);
	}
	return 0;
} 
