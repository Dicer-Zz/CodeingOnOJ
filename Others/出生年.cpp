#include<stdio.h>
#include<set>
using namespace std;

int main(){
	int y,x = 0,n;
	set <int> s;
	scanf("%d %d",&y,&n);
	do{
		s.clear();
		if(y < 1000){
			s.insert(0);
		}
		int m = y;
		while(m > 0){
			s.insert(m%10);
			m /= 10;
		}
		y++; 
		x++;
	}while(s.size() != n);
	printf("%d %04d\n",x-1,y-1);
	return 0;
}
