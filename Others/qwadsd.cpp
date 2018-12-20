#include<stdio.h>
double s[120];
int main()
{
	int n,a;
	double max;
	scanf("%d",&n);
	while(n--){
		max = 0;
		scanf("%d",&a);
		for(int i=0;i<a;i++)
		scanf("%lf",&s[i]);
		for(int i=0;i<(a-1);i++){
		if(s[i]>=s[i+1] && s[i]>max)
		max = s[i];
		else if(s[i]<=s[i+1] && s[i+1]>max)
		max = s[i+1];	
		}
		printf("%.2lf\n",max);
	}
	return 0;
}
