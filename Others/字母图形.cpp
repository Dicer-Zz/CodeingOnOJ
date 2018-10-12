#include<stdio.h>
#include<math.h>
int main(){
	int m,n;
	scanf("%d%d",&n,&m); 
	for(int i=0;i<n;i++){
		if(i<m)
		for(int j=i;j>0 && j;j--)
		printf("%c",j+'A');
		else
		for(int j=i,ans=m;ans>0;ans--&&j--)
		printf("%c",j+'A');
	/*	if(m>=n)
		for(int k=0;k<m-i;k++)
		printf("%c",k+'A'); 
		else */
		for(int k=0;k<m-i;k++)
		{
			if(k<m)
			printf("%c",k+'A');
		}
		if(i==n-1)
		break;
		else 
		printf("\n");
	}
	return 0;
} 
