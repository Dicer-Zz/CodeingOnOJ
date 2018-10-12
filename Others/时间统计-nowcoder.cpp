#include<stdio.h>

int main(){
	int t;
	int d1,h1,m1,s1,d2,h2,m2,s2;
	int s_sum;
	scanf("%d",&t); 
	while(t--){
		scanf("%dday%d:%d:%d",&d1,&h1,&m1,&s1);
		scanf("%dday%d:%d:%d",&d2,&h2,&m2,&s2);
		s_sum = (d2-d1)*24*3600+(h2-h1)*3600+(m2-m1)*60+(s2-s1);
		printf("%d\n",s_sum);
	}
	return 0;
}
