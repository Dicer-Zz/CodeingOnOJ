#include<stdio.h>
#include<algorithm>
using namespace std;

int main(){
	int n,a[4];
	scanf("%d",&n);
	while(n--){
		scanf("%d %d %d",&a[0],&a[1],&a[2]);
		sort(a,a+3);
		if(a[0] + a[1] <= a[2]){
			printf("NO\n");
			continue;
		}
		if(a[2] - a[1] >= a[0]){
			printf("NO\n");
			continue;
		}
		if(a[2] - a[0] >= a[1]){
			printf("NO\n");
			continue;
		}
		printf("YES\n");
	}
	return 0;
}
