#include<cstdio>
#include<algorithm>
using namespace std;
int a[1000+10];
int main()
{
	int n;
	while(~scanf("%d",&n)){
		for(int j=1;j<=n;j++){
			scanf("%d",&a[j]);
		}
		sort(a+1,a+1+n);
		int j;
		int sum=0;
		for(j=n;j>3;j-=2){
			sum+=min(a[j]+a[1]+a[2]+a[2],a[j]+a[j-1]+a[1]+a[1]);
		}
		if(n==1){
			printf("%d\n",a[1]);
		}else if(j==2){
			printf("%d\n",sum+a[2]);
		}else if(j==3){
			printf("%d\n",sum+a[1]+a[2]+a[3]);
		}
	}
	return 0;
}
