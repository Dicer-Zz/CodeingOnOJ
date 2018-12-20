#include<stdio.h>
int a[1050];
int main()
{
	int n,m,sum;
	while(scanf("%d",&n),n){        //输入n 
		for(int i = 0;i<n;i++){   //输入数组 
			scanf("%d",&a[i]);
		}
		sum = 0;
		scanf("%d",&m);                   //输入目标分数 
		for(int i=0;i<n;i++){      //求目标分数个数 
			if(a[i] == m)
			sum ++;
		}
		printf("%d\n",sum);
	} 
	return 0;
 } 
