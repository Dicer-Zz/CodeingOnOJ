#include<stdio.h>
#include<algorithm>
#include<string.h>
using namespace std;
int a[605];
bool cmp(int x,int y){
	return x > y;
}
int main(){
	int l,n;
	while(scanf("%d %d",&l,&n) != EOF){
		long long sum = 0;
		for(int i=0;i<n;i++)
			scanf("%d",&a[i]);
		sort(a,a+n,cmp);
		int count = 0;
		for(int i=0;i<n;i++){
			sum += a[i];
			count++;
			if(sum >= l)
				break;
		}
		if(sum < l)
			printf("impossible\n");
		else
			printf("%d\n",count);
	}
	return 0;
} 
