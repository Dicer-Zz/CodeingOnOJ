#include<stdio.h>

int fac(int x){
	if(x==0)
	return 1;
	else if(x>1)
	return x *= fac(x-1);
	else 
	return x;
}
int com(int m,int n){
	return fac(m)/(fac(n)*fac(m-n));
}
int sum(int m,int n){ 
	int ans=0;
	int i=0;
	for(;i<n;){	ans += com(m+i,i);i++;}
	return ans;
}
int main(){
	int a,b;
	while(scanf("%d%d",&a,&b)!=EOF){
		a = (a+9)/10;
		b = (b+9)/10;
		double l;
		l = (double)((double)sum(b,a)/(sum(a,b)+sum(b,a)));
		printf("%.1lf",l*100);
		printf("%%\n"); 
	}
	return 0;
}
