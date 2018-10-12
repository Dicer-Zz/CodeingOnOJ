/*HDU2019 ÊýÁÐÓÐÐò*/ 
#include<stdio.h>
#include<iostream>
#include<algorithm>
using namespace std;

bool cmp(int x,int y){
	return abs(x) > abs(y);
}
int main(){
	int n,m;
	int a[150];
	while(~scanf("%d",&n) && n){
		for(int i=0;i<n;i++){
			scanf("%d",&a[i]);
		}
		sort(a,a+n,cmp);
		for(int i=0;i<n;i++){
			printf("%d%c",a[i],i==n-1?'\n':' ');
		}
	}
	return 0;
} 
