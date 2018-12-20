#include<stdio.h>
long long  s[100000000+10]; 
int main()
{
	s[0]=s[1]=1;
	for(int i=2;i<1e6+10;i++){
		s[i] = s[i-1] +s[i-2];
	}
	int  n;
	while(scanf("%d",&n)!=EOF){
		if(s[n]%3 == 0)
		printf("YES\n");
		else 
		printf("NO\n");
	}
	return 0;
}
