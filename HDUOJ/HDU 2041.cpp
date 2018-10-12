/*HDU 2041³¬¼¶Â¥ÌÝ µÝÍÆ ì³²¨ÄÇÆõ*/ 
#include<stdio.h>

long long f[45];
int main(){
	int n,m;
	scanf("%d",&n);
	f[1] = 1;f[2] = 2;
	for(int i=3;i<45;i++){
		f[i] = f[i-1] + f[i-2];
	}
	while(n--){
		scanf("%d",&m);
		printf("%lld\n",f[m-1]);
	}
	return 0;
}
