/*HDU 2021 ·¢¹¤×Ê¿©£º£©*/

#include<stdio.h>
#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	int m[6]  = {100,50,10,5,2,1};
	int n,a,sum;
	while(~scanf("%d",&n) && n){
		sum = 0;
		while(n--){
			scanf("%d",&a);
			for(int i=0;a!=0;i++){
				sum += a/m[i];
				a %= m[i];
			}
		}
		printf("%d\n",sum);
	}
	return 0;
} 
