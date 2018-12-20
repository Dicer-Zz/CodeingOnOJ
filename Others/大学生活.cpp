#include<stdio.h>
double a[15];
int b[15];
int main()
{	int n;
	double total=0;
	int num1=0,num2=0;
	while(scanf("%d",&n)!=EOF){
	for(int i=0;i<n;i++){    //输出学分和成绩 
	scanf("%lf",&a[i]);
	scanf("%d",&b[i]);
	}
	for(int i=0;i<n;i++){
		if(b[i]<30){
		num1++;
		total += a[i];}
		else if(b[i]>=30 && b[i]<60){
		num2++;
		total += a[i];}
	}
	printf("%d %d %.1lf",num1,num2,total);}
	return 0;
}
