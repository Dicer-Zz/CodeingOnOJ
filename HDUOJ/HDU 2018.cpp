/*HDU2018 Ä¸Å£µÄ¹ÊÊÂ*/
#include<stdio.h>
#include<iostream>
using namespace std;

struct cow{
	long a,b,c,d;
};
int main(){
	int n;
	cow c[60];
	c[0].a = c[0].b = c[0].c =  0;
	c[0].d = 1;
	for(int i=1;i<60;i++){
		c[i].a = c[i-1].d + c[i-1].c;
		c[i].b = c[i-1].a;
		c[i].c = c[i-1].b;
		c[i].d = c[i-1].d + c[i-1].c;
		//printf("%lld %lld %lld %lld\n",c[i-1].a,c[i-1].b,c[i-1].c,c[i-1].d);
	}
	while(~scanf("%d",&n) && n){
		n--;
		printf("%lld\n",c[n].a+c[n].b+c[n].c+c[n].d);
	}
	return 0;
} 
