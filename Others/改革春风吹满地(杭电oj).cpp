#include<stdio.h>
#include<math.h>

struct Coordinate{
	double x,y;
}a[105];

int main(){
	int n;
	while(~scanf("%d",&n) && n){
		for(int i=0;i<n;i++){
			scanf("%lf %lf",&a[i].x,&a[i].y);
		}
		double s = 0;
		for(int i=0;i<n-1;i++){
			s += a[i].x*a[i+1].y - a[i].y*a[i+1].x;
		}
		s += a[n-1].x*a[0].y-a[n-1].y*a[0].x;
	/*	 for(int i=0;i<n-1;i++){
            s+=a[i].x*a[i+1].y-a[i].y*a[i+1].x;
        }
        s+=a[n-1].x*a[0].y - a[n-1].y*a[0].x;*/
		printf("%.1lf\n",0.5*abs(s));
	}
	return 0;
}
