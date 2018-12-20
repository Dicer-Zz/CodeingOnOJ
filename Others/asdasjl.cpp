#include<stdio.h>
int a[1010];
char s[1010]; 
int main()
{
	int n;
	scanf("%d",&n);
	scanf("%s",&s);
	for(int i=0;i<n;i++){
		a[i] = s[i] - '0';
	}
	for(int i=n-1;i>=0;i--){
		printf("%d",a[i]);
	}
	return 0;
}
