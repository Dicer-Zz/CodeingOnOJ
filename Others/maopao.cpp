#include<stdio.h>
int s[105];
int main()
{
	int T,n,time=0,c=0;
	scanf("%d",&T);
	while(T--)
	{	
		time =0;
		scanf("%d",&n);
		for(int i=0;i<n;i++)
		scanf("%d",&s[i]);
		for(int j=0;j<n-1;j++){
		for(int i=0;i<n-1;i++){
			if(s[i]>s[i+1]){
				int t;
				t=s[i];
				s[i]=s[i+1];
				s[i+1]=t;	
				time++;
				c++;
			}
		}
		}
		printf("%d\n",time);
	}
	return 0;
}
