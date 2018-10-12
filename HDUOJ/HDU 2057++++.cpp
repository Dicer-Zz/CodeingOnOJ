#include<stdio.h>

int main(void){
	long long a,b,ans;
	
	while(~scanf("%llx %llx",&a,&b)){
		ans = a + b;
		
		if(ans >= 0)	printf("%llX\n",ans);
		else	printf("-%llX\n",-ans);
	}	
	return 0;
}
