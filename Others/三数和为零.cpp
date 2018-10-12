#include<stdio.h>
#include<algorithm>
using namespace std;
/*
struct solution{
	int a,b,c;
}sol[3005];

int compare(solution x,solution y){
	if(x.a==y.a){
		if(x.b==y.b){
			return x.c < y.c;
		}
		else 
			return x.b < y.b;
	}
	else 
		return x.a < y.a;
}*/

int main(){
	int n,count = 0;
	int flag = 1;
	int a[1005];
	scanf("%d",&n); 
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
	sort(a,a+n);
	if(a[n-1] < 0 || a[0] > 0 ){
		printf("No Solution\n");
		flag = 0;
	}
	if(flag){
	for(int i=0;i<n;i++){
		if(a[i] >= 0)		//不可能满足 
			break;
		for(int j=i+1;j<n;j++){
			if(a[i]+a[j] >= 0)		//不可能满足 
				break;
			for(int k=j+1;k<n;k++){
				if(a[i]+a[j]+a[k]>0)		//不可能满足 
					break;
				if(a[i]+a[j]+a[k]==0){
					/*sol[count].a = a[i];
					sol[count].b = a[j];
					sol[count].c = a[k];
					count++;*/
					printf("%d %d %d\n",a[i],a[j],a[k]);
				}
			}
		}
	}
	}
/*	sort(sol,sol+count,compare);
	for(int i=0;i<count;i++){
		printf("%d %d %d\n",sol[i].a,sol[i].b,sol[i].c);
	}*/
	return 0;
}
