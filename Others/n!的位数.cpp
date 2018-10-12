#include<stdio.h>
#include<math.h>
using namespace std;

double bits_fac(int n){
	double sum = 0;
	if(n==1)
		return 0;
	else {
		sum = log10(n);
		//printf("%lf\n",sum);
		return sum+bits_fac(n-1);
	}
}
int main(){
	int n,sum = 0;
	scanf("%d",&n); 
	printf("%.0lf\n",bits_fac(n)+0.5);
	return 0;
} 
