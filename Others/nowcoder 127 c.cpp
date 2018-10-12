#include<bits/stdc++.h>
using namespace std;


double dis(int x1,int y1,int x2,int y2){
	return sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
}
int main(void){
	double x1,x2,x3,y1,y2,y3;
	double a,b,c,p,area = 0;
	int n;
	cin>>n;
	n-=2;
	cin>>x1>>y1>>x2>>y2;
	a = dis(x1,y1,x2,y2); 
	while(n--){
		cin>>x3>>y3;
		b = dis(x2,y2,x3,y3);
		c = dis(x1,y1,x3,y3);
		p = (a+b+c)/2;
		area += sqrt(p*(p-a)*(p-b)*(p-c));
		a = c;
		x2 = x3;y2 = y3;
	}
	printf("%.0lf\n",area+0.5);
	return 0;
}
