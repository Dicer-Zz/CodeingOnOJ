#include<stdio.h>
int euler(int a){
	if(a==0) return 2;
	if(a==1) return 1;
	if(a==2) return 1;
	if(a==3) return 2;
	if(a==4) return 2;
	if(a==5) return 4;
	if(a==6) return 2;
	if(a==7) return 6;
	if(a==8) return 4;
	if(a==9) return 6;
}
int Value(int a){
	int d,v=1;
	while(a>0){
		d = a%10;
		a /= 10;
		v = v*(euler(d)+d-1);	
	}
	return v;
}
int main(){
	int t,m,count;
	scanf("%d",&t);
	while(t--){
		count=0;
		scanf("%d",&m);
		for(int i=1;i<=100000000;i++){
		if(Value(i) % m == 0)  count++;
		}
		printf("%d\n",count); 
	//	printf("%d\n",Value(m));	
	}	
} 
