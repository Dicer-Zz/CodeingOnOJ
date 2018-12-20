#include<stdio.h> 
int main()
{
	int a,b,c,e,f;
	scanf("%d %d %d",&a,&b,&c);
	if(a>=b&a>=c&b>=c)e=a,f=c;
	if(a>=b&a>=c&c>=b)e=a,f=b;
	if(b>=a&b>=c&a>=c)e=b,f=c;
	if(b>=a&b>=c&c>=a)e=b,f=a;
	if(c>=a&c>=b&a>=b)e=c,f=b;
	if(c>=a&c>=b&b>=a)e=c,f=a;
	printf("%d %d\n",e,f);
	return 0;
}
