#include<stdio.h>
#include<algorithm>
using namespace std;
int a[10000+10];
int main(){
	int T,n;
	scanf("%d",&T);
	while(T--){
		scanf("%d",&n);
		for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
	//	int min,max;
	//	min=0;max=10000;
		sort(a,a+n);
		for(;a[0]+1!=a[n-1] && a[0]!=a[n-1];){	
		//	max = a[n-1];
		//	min = a[0];
			a[0] += 1;
			a[n-1] -= 1;
			sort(a,a+n);
		}
	//	for(int i=0;i<n;i++)
	//	printf("%d",a[i]);
	//	printf("\n");
		int count=1,Flag = a[0];
		for(int i=1;i<n;i++){
			
			if(Flag == a[i])   count++;
			else   count--;
		}
		if(count>=0)   printf("%d\n",(count+n)/2);
		else           printf("%d\n",(n-count)/2);
	}
	return 0;
}
