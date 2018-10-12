#include<stdio.h>

int fac(int a){
	if(a>0)
		return a*fac(a-1);
	else
		return 1;
}

int main(){
	int m,n,hp;
	while(~scanf("%d %d %d",&m,&n,&hp)){
		int flag;
		if(n>m){
			flag = n;
			n = m;
			m = flag;
		}
		int a = hp / m + 1;
		int b = hp / n + 1;
		int total = 0;
		flag = 0;
		for(int i=0;i<=a;i++){
			for(int j=0;j<=b;j++){
				if(i*m + j*n < hp){
					if(i*m + j*n >= hp-m ){
					total += (fac(i+j)/fac(i)/fac(j));
			 		}
					if(i*m + j*n >= hp-n){
					total += (fac(i+j)/fac(i)/fac(j));	
					}
				}
			}
		}
		printf("%d\n",total);
	}
	return 0;
}
