#include<stdio.h>

void A(int n){
	if(n==1)
	printf("A");
	else{
	A(n-1);
	printf("%c",n-1+'A');
	A(n-1); 
	}
}

int main(){
	int a;
	while(scanf("%d",&a)==1){
	A(a);printf("\n");
	}
//	printf("\n");
	return 0;
}
