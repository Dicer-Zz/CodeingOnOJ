#include<stdio.h>
#include<math.h>
#include<string>
#include<algorithm>
using namespace std;
#define ll long long
int a[1000010];
int main(){
	int x,n;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d%d",&x,&a[i]);
	//	printf("%lld\n",a[i]);
	}
	sort(a,a+n);
	int s,sum=0;
	s = a[n/2];
	for(int i=0;i<n;i++)
	sum += abs(a[i] - s);
	printf("%d\n",sum);
	return 0;
} 
