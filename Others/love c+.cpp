#include<stdio.h>
int main()
{
	int n;
	char c;
	while(scanf("%c %d",&c,&n)!=EOF)
	{
		getchar();
		for(int i=0;i<n;i++)
		{		
		printf("%c",c);
		}
		printf("\n");
		{
		for(int i=2;i<n;i++)
		printf("%c\n",c);
		}
		for(int i=0;i<n;i++)
		{
		printf("%c",c);
		}
		printf("\n\n");
	}
	return 0;
}
