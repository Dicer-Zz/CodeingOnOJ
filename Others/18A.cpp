#include<stdio.h>
#define ll long long
ll fac(ll a){
	if(a>1)
	return a*fac(a-1);
	else 
	return a;
}
ll node(ll n,ll l){
	ll sum ;
	int flag=0;
	int i=1;
	while(i++){
		sum=0;
		if(i-1>l)
		sum += fac(i-1) / fac(i-l-1);
		else
		sum += fac(i-1);
		if(sum>=n)
		break;
	}
	return i-1;
}
int main(){
	ll n,l;
	scanf("%d%d",&n,&l);
	printf("%d",node(n,l));
	//printf("%lld",fac(4));
	return 0;
}
