#include<stdio.h>
int gcd(int a, int b)
{
	if (b)
            while((a %= b) && (b %= a))
			;
	return a + b;
}
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n,m;
		scanf("%d%d",&m,&n);
		if(gcd(m,n)==1){
			printf("NO\n");
		}
		else
		printf("YES\n");
	}
	return 0;
} 
