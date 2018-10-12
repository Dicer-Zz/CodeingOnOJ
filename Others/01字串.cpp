#include<stdio.h>
int a[5];

int main(){
	int ans=0;
	for(int i=0;i<32;i++){
		int b=i;
		ans = 0;
		for(int j=0;j<5;j++){
			a[ans] = b%2;
			b = b/2;
			ans++;
		}
		for(int k=4;k>=0;k--)
		printf("%d",a[k]);
		printf("\n");
	}
	return 0;
} 
