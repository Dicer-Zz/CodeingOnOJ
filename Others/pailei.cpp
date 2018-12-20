#include<stdio.h>
#include<string.h>
using namespace std;

int main()
{
	int n,i,j;
	char a[10];
	for(n=123;n<=329;n++)
	{
		sprintf(a,"%d",1000000*n+1000*2*n+3*n);
		for(j=0,i='1';i<='9';memchr(a,i++,9) && j++);
		if(j==9)
		printf("%d %d %d\n",n,2*n,3*n);
	}
	return 0;
}
