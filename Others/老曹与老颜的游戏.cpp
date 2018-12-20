#include<stdio.h>

int main(){
	int a,b,c;
	while(scanf("%d%d%d",&a,&b,&c)==3){
		int Flag=1;
		int i=0,j=0;
		for(;a*i+b*j<=c;i++){
			for(;a*i+b*j<=c;j++){
				if(a*i+b*j==c){
					Flag = 0;
					break;
				} 	
			}
			j=0;
		}
		if(!Flag)
		printf("Yes\n");
		else 
		printf("No\n");
	}
	return 0;
}
