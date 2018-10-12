#include<stdio.h>
#include<string.h>
#define maxn 100050

int a[maxn];

int main(){
	int n,m,k;
	memset(a,0,sizeof(a)); 
	scanf("%d",&n);
	while(n--){
		scanf("%d",&k);
		int flag = k;
		while(k--){
			scanf("%d",&m);
			if(flag != 1)		a[m] = 1;		//有朋友 
		}
	}
	scanf("%d",&m);
	int sum = 0;
	while(m--){
		scanf("%d",&n);
		if(a[n] == 0 ){		//没朋友 
			sum++;			
			a[n] = 1;		//输出过 
			printf("%d",n);
			printf("%c",m == 1?'\n':' ');
		}
	}
	if(sum == 0)	printf("No one is handsome\n");
	return 0;
} 
