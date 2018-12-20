#include<stdio.h>
#include<string.h>
char s[1005];
int main()
{
	int T,a;
	scanf("%d",&T);
	getchar();
	while(T--){
		gets(s);
		a=strlen(s);
		for(int i=a-1;i>=0;i--)
		printf("%c",s[i]);
		printf("\n");
	}
	return 0;
}
