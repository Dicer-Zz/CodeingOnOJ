#include<stdio.h>
#include<math.h>
#include<iostream>
using namespace std;

double far(int x1,int y1,int x2,int y2){
	return sqrt(((x1*1.0)-(x2*1.0))*((x1*1.0)-(x2*1.0))+((y1*1.0)-(y2*1.0))*((y1*1.0)-(y2*1.0)));
}
int main(){
	int t;
	int x1,x2,y1,y2,r1,r2;
	scanf("%d",&t);
	while(t--){
		scanf("%d %d %d %d %d %d",&x1,&y1,&r1,&x2,&y2,&r2);
		if(far(x1,y1,x2,y2) == 0 && r1==r2){
			cout << -1 << endl;
		}
		else if(far(x1,y1,x2,y2) < abs(r1-r2)){
			cout << 0 << endl;
		}
		else if(far(x1,y1,x2,y2) == abs(r1-r2)){
			cout << 1 << endl;
		}
		else if(far(x1,y1,x2,y2) == abs(r1+r2)){
			cout << 3 << endl;
		}
		else if(far(x1,y1,x2,y2) > abs(r1+r2)){
			cout << 4 << endl;
		}
		else if(far(x1,y1,x2,y2) < abs(r1+r2)){
			cout << 2 << endl;
		}
	}
	return 0;
} 
