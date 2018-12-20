#include<stdio.h>
int main()
{	int T,n;
	scanf("%d",&T); 	
	while(T--){
		scanf("%d",&n);
		n -= 1;
		for(int i=0;i<44500;i++){
			if(n == (1+i)*i/2){
			printf("1\n");break;}
			if(i>44495){
			printf("0\n");break;}	
			}
		}	
	return 0;
}
