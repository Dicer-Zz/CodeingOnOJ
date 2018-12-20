#include<stdio.h>
int main()
{
	int n,a,b,c,s;
	scanf("%d%d%d%d",&n,&a,&b,&c);
	if(a>=b)
	s=b;
	else 
	s=a;
	if(s>=c){
	if(n==1 ||n==2)
	printf("%d",(n-1)*s);
	else
	printf("%d",s+(n-2)*c);
	}
	else
	printf("%d",(n-1)*s);
	return 0;
}
