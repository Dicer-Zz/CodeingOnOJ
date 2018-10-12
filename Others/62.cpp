#include<stdio.h>
#include<string.h>
#define max 1000005
int s[max];
int main(){
	for(int i=1;i<=max;i++){  //make a list 
			int x=i;
			s[i] = 0;
			while(x){
				if(x%10 == 4){ 
				s[i] = 1; 
				break;
				}
				if(x%100 == 62){
				s[i] = 1; 
				break; 
				}
				x /= 10; 
			}
		}
	int n,m,total;
	while(scanf("%d%d",&n,&m)&&n+m){
		total = 0;
		for(int i=n;i<=m;i++)
		if(s[i])
		total++;
		printf("%d\n",m-n+1-total);
	}
	return 0;
} 
