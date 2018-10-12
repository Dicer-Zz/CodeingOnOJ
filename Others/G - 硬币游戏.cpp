#include<stdio.h>
#include<math.h>

int main(){
	int t;
	double r;
	scanf("%d",&t);
	while(t--){
		scanf("%lf",&r);
		if(r < 0.5)
			printf("%.0lf\n",r/1);
		else
			printf("%.0lf\n",floor(r*2));
	}
	return 0;
}
