#include<stdio.h>
int main()
{
	int m,a,b,c,d,e;
	scanf("%d",&m);
	for(int i = m;;i++){
		if(i/10000 >= 1){
			e=i%10000;
			d=i%1000-10*e;
			c=i%100-100*e-10*d;
			b=i%10-1000*e-100*d-10*c;
			a=i-e*10000-d*1000-c*100-b*10;
			if(i==a*a*a*a*a+b*b*b*b*b+c*c*c*c*c+d*d*d*d*d+e*e*e*e*e){
			printf("%d",i);break;}
			else continue;
		}
		if(i/1000 >= 1 && i/1000 < 10){
			d=i%1000;
			c=i%100-10*d;
			b=i%10-100*d-10*c;
			a=i-1000*d-100*c-10*b;	
			if(i==a*a*a*a+b*b*b*b+c*c*c*c+d*d*d*d){
			printf("%d",i);break;}
			else continue;
		}
		if(i/100 >= 1 && i/100 < 10){
			c=i%100;
			b=i%10-10*c;
			a=i-100*c-10*a;	
			if(i==a*a*a+b*b*b+c*c*c){
			printf("%d",i);break;}
			else continue;
		}
		if(i/10 >= 1 && i/10 < 10){
			a=i%10;
			b=i-10*a;	
			if(i==a*a+b*b){
			printf("%d",i);break;}
			
		}
	}
	return 0;
}
