#include<stdio.h>
int main()
{
	char a,b;
	scanf("%c %c",&a,&b);
	if(a>='a' && a<='z' && b>='A' && b<='Z')
	printf("%c",b);
	else if(b>='a' && b<='z' && a>='A' && a<='Z')
	printf("%c",a);
	else 
	printf("%c",a>b?a:b);
	return 0;
}
