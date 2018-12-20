#include<stdio.h>
int s[32]; 
int main()
{
	int x,d,i;
	scanf("%d",&x);
	for( i=0;x/2 != 0;i++){
		s[i] = x % 2;
		x /= 2;
	}
	printf("%d",x);
/*	for(i-=1;i>=0;i--)           //Êä³ö²âÊÔ 
	printf("%d",s[i]);
*/	return 0;
 } 
