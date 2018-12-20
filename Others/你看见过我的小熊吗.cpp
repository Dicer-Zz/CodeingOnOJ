#include<stdio.h>
int a[1000+10];
int main(){
	int T,n;
	scanf("%d",&T);
	while(T--){
		scanf("%d",&n);
		for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
		int max=0,count=0;
		for(int i=0;i<n;i++){
			if(a[i]==8)
			count++;
			else 
			count = 0;
			if(count>max)
			max=count;
		}
		printf("%d\n",max);
	}
	return 0;
}
