#include<stdio.h>

int main(){
	int t;
	double a,b;
	double x1,y1,z1;
	double x2,y2,z2;
	double x3,y3,z3;
	double xa,ya,za,xb,yb,zb;
	double xc,yc,zc,xd,yd,zd; 
	scanf("%d",&t);
	while(t--){
		scanf("%lf %lf %lf",&xa,&ya,&za);
		scanf("%lf %lf %lf",&xb,&yb,&zb);
		scanf("%lf %lf %lf",&xc,&yc,&zc);
		scanf("%lf %lf %lf",&xd,&yd,&zd);
		x1 = xa - xb;y1 = ya - yb;z1 = za - zb;
		x2 = xa - xc;y2 = ya - yc;z2 = za - zc;
		x3 = xa - xd;y3 = ya - yd;z3 = za - zd;
		if(x1*y2*z3 + y1*z2*x3 + z1*x2*y3 - z1*y2*x3 - y1*x2*z3 - x1*z2*y3 == 0){
			printf("Yes\n");
		}
		else
			printf("No\n");
	}
	
	return 0;
}
