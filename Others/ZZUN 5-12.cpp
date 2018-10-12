/*  2018/5/12 zznu  C : 次小次大值 */  
#include<stdio.h>
#include<algorithm>
using namespace std;

int main(void){
	int n,a[150];
	while(~scanf("%d",&n)){
		for(int i=0;i<n;i++)
			scanf("%d",&a[i]);
		sort(a,a+n);
		if(a[1]!=a[n-2])	printf("%d %d\n",a[1],a[n-2]);
		else	printf("%d %d\n",a[1]+1,a[n-2]-1);
	}
	return 0;
}
