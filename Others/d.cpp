#include<stdio.h>
int main()
{
	int a,b,c,d=0;
	while(scanf("%d%d",&a,&b),a+b){
		d=0;
		int e=b-a+1;
		for(int i=a;i<=b;i++){
			c = i*(i+1)+41;
			for(int j=2;j*j<c;j++){
				if(c%j==0){
				d++;
				break;
				}
			}	
		}
		if(d==0)
		printf("OK\n");
		else 
		printf("Sorry\n");
	}
	return 0;
}
