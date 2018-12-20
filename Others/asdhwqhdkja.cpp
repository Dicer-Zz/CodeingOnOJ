#include<stdio.h> 
int s[105][105];
int main()
{
	int n,a,b,sum;
	scanf("%d",&n);
	while(n--){
		sum = 0;
		scanf("%d %d",&a,&b);
		for(int i=0;i<a;i++){
			for(int j=0;j<b;j++)
			scanf("%d",&s[i][j]);
		}
		for(int i=0;i<a;i++){
			for(int j=0;j<b;j++){
				if(s[i][j] == 1)
				sum ++;
			}
		}
		printf("%d\n",sum);
	}
	return 0;
}
