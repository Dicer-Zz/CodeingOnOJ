#include<stdio.h>
#include<string.h>
int s[1000020];
int main()
{
	memset(s,0,sizeof(s));
	s[0]=s[1]=1;
	for(int i=2;i<1e6+20;i++)
	{
		for(int j=2;j*i<1e6+20;j++)
		{
			s[i*j] = 1;
		}
	}
	for(int i=0;i<100;i++){
		if(s[i] ==0){
		printf("%d\n",i);}	
	}
	int T,m;
	scanf("%d",&T);
	while(T--){
		scanf("%d",&m);
		
	} 
	return 0;
}
