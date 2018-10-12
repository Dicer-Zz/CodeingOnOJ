#include<stdio.h>

int max(int x,int y){
	if(x > y)
		return x;
	else 
		return y;
}

int main(){
	int a,b;
	scanf("%d %d",&a,&b);
	printf("%d\n",max(a,b));
	return 0;
}
