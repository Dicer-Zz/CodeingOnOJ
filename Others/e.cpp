#include<stdio.h>
#include<algorithm>
using namespace std;

int a[200005];

int main(void){
	int n,k;
	scanf("%d %d",&n,&k);
	for(int i=1;i<=n;i++)
		scanf("%d",&a[i]);
	sort(a+1,a+n+1);
	if(k==0){
		if(a[1] == 1)	printf("-1\n");
		else	printf("%d\n",a[1]-1);
	}
	else if(k==n){
		printf("%d\n",a[n]);
	}
	else if(a[k]==a[k+1])	printf("-1\n");
	else	printf("%d\n",a[k]);
	return 0;
}
