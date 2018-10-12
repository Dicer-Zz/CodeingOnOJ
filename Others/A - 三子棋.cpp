#include<stdio.h>

int main(){
	int t;
	int a,b;
	scanf("%d",&t);
	while(t--){
		scanf("%d %d",&a,&b);
		if(a==2 && (b==1 || b==4))
			printf("Equal\n0\n");
		else if((a==1) && (b==1 || b==4) || (a==3) && (b==1 || b==4))
			printf("Win\n6\n");	
		else
			printf("Win\n4\n");
	}
	return 0;
}
