#include<stdio.h>
#include<string.h>
char s[1020];
int main()
{	
	int T;
	scanf("%d",&T);
	getchar();
	while(T--){
		gets(s);	
		int l=strlen(s);
		for(;l>0;l--){
			printf("%c",s[l-1]);
		}
		printf("\n");
	}
	return 0;
} 
