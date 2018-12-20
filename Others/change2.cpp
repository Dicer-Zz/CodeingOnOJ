#include<stdio.h>
void ttt(int a){
	if(a){
		ttt(a/2); 
		printf("%d",a%2);
	}
}
int main (){
	int a,t;
	scanf("%d",&t);
	while(t--){
	scanf("%d",&a);
	ttt(a);
	printf("\n");
	}
	return 0;
}
