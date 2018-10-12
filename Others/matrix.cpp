#include<stdio.h>
#include<string.h>
using namespace std;

long long matrix[1005][1005];
struct exp{
	long long i;
	long long j;
	long long extra;
}mm[1005];
int main(){
	long long n,m,t,Q;
	scanf("%lld",&t);
	while(t--){
		scanf("%lld %lld",&n,&m);
		for(int i=1;i<=n;i++){
			for(int j=1;j<=m;j++){
				matrix[i][j]= i+j;
			}
		}
		scanf("%lld",&Q);
		char ch;
		long long p,q,r,s,v; 
		long long sum;
		long long total = 0;
		while(Q--){
			sum = 0;
			getchar();
			scanf("%c",&ch);
			if(ch == 'Q'){
				scanf("%lld %lld %lld %lld",&p,&q,&r,&s);
				sum = (s-q+r-p)*(s-q+1)*(r-p+1)/2+(p+q)*(s-q+1)*(r-p+1);
				for(int k=0;k<total;k++){
					if(mm[k].i >= p && mm[k].i <= r && mm[k].j >= q && mm[k].j <= s){
							sum += mm[k].extra;
						}
				}
				printf("%lld\n",sum);
			}
			else if(ch == 'M'){
				scanf("%lld %lld %lld",&p,&q,&v);
				mm[total].extra = v - matrix[p][q];
				mm[total].i = p;
				mm[total].j = q;
				total++;
			}
		} 
	}
	return 0;
}
