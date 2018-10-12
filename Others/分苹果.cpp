#include<stdio.h>

int fun(int n,int m){
	if(n==1 || m==1 || n==0)
		return 1;
	else if(n<m)
		return fun(n,n);
	else
		return fun(n,m-1) + fun(n-m,m);
}
int main(){
	int t;
	int n,m;
	scanf("%d",&t);
	while(t--){
		scanf("%d %d",&n,&m);
		printf("%d\n",fun(n,m));
	}
	return 0;
}
