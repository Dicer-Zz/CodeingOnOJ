#include<bits/stdc++.h>
using namespace std;
int main(){
	double x1,x2,y1,y2,x3,x4,y3,y4;
	double n1,n2,n3,n4,m1,m2,m3,m4;
	double h,w,s;
	while(cin>>x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4){
		n1 = min(x1,x2);m1 = min(y1,y2);
		n2 = max(x1,x2);m2 = max(y1,y2);
		n3 = min(x3,x4);m3 = min(y3,y4);
		n4 = max(x3,x4);m4 = max(y3,y4);
		if(n1>=n4||n3>=n2||m3>=m2||m1>=m4)
			printf("0.00\n");
		else{
			h = min(m2,m4) - max(m1,m3);
			w = min(n2,n4) - max(n1,n3);
			s = h*w;
			printf("%.2lf\n",s);
		}
	}
	return 0;
}
