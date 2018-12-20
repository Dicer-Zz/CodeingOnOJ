#include<stdio.h>
char s[12];
int main()
{
	int x,ten=0;
	while(scanf("%d",&x)!=EOF){
	for(int i=0;i<10;i++){
		s[i] = x%2;
		x = x/2;
	}
	for(int i=0;i<10;i++){
		ten = s[0];
		for(int j=i;j>0;j--){
			s[i] *= 10;
		}
		ten += s[i];
	}
	printf("%d\n",ten);}
	return 0;
}
