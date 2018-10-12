#include<stdio.h>

int main(){
	int h,m;
	scanf("%d:%d",&h,&m);
	if(h <= 12) printf("Only %02d:%02d.  Too early to Dang.\n",h,m);
	else{
		int sum = h - 12;
		if(m > 0)	sum++;
		while(sum--)	printf("Dang");
		printf("\n");
	}
	return 0;
} 
