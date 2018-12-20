#include<bits/stdc++.h>
int power(int a,int b){			//a^b
	int base = 1;
	while(b > 1){
		if(b%2 == 0){
		a *= a;
		b >>= 1;
		}
		else{
			base *= a;
			a *= a;
			b >>= 1;	
		}
	}
	return a*base;
}
int main(){
	int a,b;
	scanf("%d %d",&a,&b);
	printf("%d\n",power(a,b));
	return 0;
} 
