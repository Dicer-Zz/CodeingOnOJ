#include<stdio.h>

int main(){
	int total = 0;
	int a;
	while(~scanf("%d",&a)){
		total++;
		if(a == 250)
			break;
	}
	printf("%d\n",total);
	return 0;
}
