#include<stdio.h>
#include<algorithm>
using namespace std;
int cmp(int a,int b){
	if(a>=b)
	return 1;
	else
	return 0;
}
int a[100000+10];
int main(){
	int n,m;
	while(scanf("%d%d",&n,&m)==2 && n+m){
		for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
		sort(a,a+n,cmp); 
		if(n<m){
		for(int i=0;i<n;i++){
			if(i==0)
		 	printf("%d",a[i]);
		 	else
		 	printf(" %d",a[i]);
		}
		printf("\n");
  		}
    	else
    	for(int i=0;i<m;i++){
    		if(i==0)
		 	printf("%d",a[i]);
		 	else
		 	printf(" %d",a[i]);
		}
		printf("\n");	
		}
	return 0;
} 
