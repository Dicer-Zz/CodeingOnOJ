#include<stdio.h>
#include<string.h>
bool check[100];
int s[100];
int main()
{
	int count=0;
	memset(s,0,sizeof(s));
	for(int i=2;i<=100;i++){
		if(!check[i])
		s[count++] = i;
		for(int j=i+i;j<=100;j+=i)
		check[j] = 1;
	}
	for(int i=0;i<count;i++)
	printf("%d\n",s[i]); 
	return 0;
}
