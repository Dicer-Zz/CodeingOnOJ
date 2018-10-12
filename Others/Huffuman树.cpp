#include<stdio.h>
#include<algorithm>
using namespace std;
int a[1005];
int main(){
	int n,ans=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	scanf("%d",&a[i]);
	sort(a,a+n);
//	int time = 2;
	int time=0;
	while(a[time+1]){
//		for(int i=0;i<n;i++)
//		printf("%d\n",a[i]);
//		printf("*****\n"); 
		ans  += a[time]+a[time+1];
		a[time] += a[time+1];
		a[time+1] =  0;
		sort(a,a+n);
		time++;
	}
	printf("%d",ans);
	return 0;
} 
