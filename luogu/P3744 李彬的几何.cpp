#include <bits/stdc++.h>
using namespace std;
struct Point{
	double x,y;
	Point(){}
	Point(double xx,double yy){
		x = xx;
		y = yy;
	}
}p[1100];
double dist(Point a, Point b){
	return sqrt((a.x-b.x)*(a.x-b.x) + (a.y-b.y)*(a.y-b.y));
}
int main(int argc, char const *argv[])
{
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;++i)	scanf("%lf %lf",&p[i].x,&p[i].y);
	double a,b,c,s,e,h,mmin = 0x3f3f3f3f3f3f3f3f;
	for(int i=0;i<n;++i){
		a = dist(p[(i+1)%n],p[(i+2)%n]);
		b = dist(p[i],p[(i+2)%n]);
		c = dist(p[i],p[(i+1)%n]);
		e = 0.5*(a+b+c);
		s = sqrt(e*(e-a)*(e-b)*(e-c));
		h = s/b;
		mmin = min(mmin,h);
	}
	printf("%.10lf\n", mmin);
	return 0;
}