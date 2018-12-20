#include<stdio.h>
int main()
{
	int n,a,b;
	char s;
	scanf("%d",&n);
	while(n--){
	a=b=0;
	while(s=getchar()!='\n'){
		if(s>='0' && s<='9')
		a++;
		else if(s>='a' &&s<='z')
		b++;
		else if(s>='A' &&s<='Z')
		b++;
	}printf("%d\n%d\n",a,b);	
	}
	return 0;
}
