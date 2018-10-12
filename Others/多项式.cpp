#include<stdio.h>

int main(){
	double a[1005];
	double x = 2;
	a[0] = 1;
	int flag = -1;
	for(int i=1;i<1005;i++){
		a[i] = a[i-1] + (1.0/x)*flag;
		flag *= -1;
		x++;
	}
	int n,m;
	scanf("%d",&n);
	while(n--){
		scanf("%d",&m);
		printf("%.2lf\n",a[m-1]);
	} 
	return 0;
}
