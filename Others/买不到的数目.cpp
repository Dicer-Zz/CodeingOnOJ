#include<stdio.h>

int main(){
	int a,b;
	while(scanf("%d%d",&a,&b) == 2){
		int c=a*b,flag=1;
		for(int i=1;;i++){
			for(int j=0;;j++){
				if(c == i*a+j*b){
					flag = 0;
					break;	
				}
			}
			i=1;
		}
		
	}
	
	
	return 0;
} 
