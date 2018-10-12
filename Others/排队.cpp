#include<stdio.h>
#include<algorithm>
using namespace std;

int a[105];

int main(){
	int n;
	while(~scanf("%d",&n)){
		for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
		sort(a,a+n);
		int sum = 0,pre = 0;
		for(int i=0;i<n;i++){
			pre += a[i];
			sum += pre;
		}
		printf("%d\n",sum);
	}
	return 0;
}
