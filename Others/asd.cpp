#include<stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--){
		int n,k,o;
		scanf("%d %d",&n,&k);
		if(k>=n){
		printf("Misaka Mikoto Win");
		if(t!=0)
		printf("\n");
		}
		else{
			o=0;
			while(1){
				if(n == k+1){
					if(o%2 == 1){
					printf("Misaka Mikoto Win");
					if(t!=0)
					printf("\n");
					break;
					}
					else{
					printf("Shirai Kuroko Win");
					if(t!=0)
					printf("\n");
					break;
					}
				}
				else {
					n--;
					o++;
				}
			}
		}
	}
	return 0;
 } 
