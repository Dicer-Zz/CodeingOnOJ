#include<stdio.h>
#include<string.h>
char s[105],a[4];
int main()
{
	char std[] = "LOVE";
	int t,count=0;
	scanf("%d",&t);
	getchar();
	while(t--)
	{
		count =0;
		gets(s);
		for(int i=0;i<strlen(s)/4;i++){
			for(int j=0;j<4;j++){
				a[j] = s[j+i*4];
			}
			if(!strcmp(a,std)) count++;
		}
		 printf("%d\n",count);
	}
	return 0;
 } 
