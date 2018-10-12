/*HDU 2031 ½øÖÆ×ª»»*/ 
#include<bits/stdc++.h> 
int main(){
	int n,r;
	char a[50];
	char b[] = {'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
	while(~scanf("%d %d",&n,&r)){
		int flag = 0;
		if(n < 0){
			flag = 1;
			n = -n;
		} 
		int total = 0;
		while(n){
			a[total] = b[n%r];
			total++;
			n /= r;
		}
		if(flag)	printf("-");
		for(int i=total-1;i>=0;i--)
			printf("%c",a[i]);
		printf("\n");
	}
	return 0;
}
