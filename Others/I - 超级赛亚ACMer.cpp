#include<stdio.h>
#include<algorithm>
using namespace std;
#define LL long long
LL a[100000010];
int max(int n,int k){
	if(n>k)
	return n;
	else
	return k;
}
int main(){
	LL t,n,m,k;
	int Case=1;
	scanf("%lld",&t);
	while(t--){
		int flag=1;
		scanf("%lld%lld%lld",&n,&m,&k);
		for(LL i=0;i<n;i++)
		scanf("%lld",&a[i]);
		sort(a,a+n);
		if(a[0]>m){
			printf("Case #%d:\nmadan!\n",Case++);
			continue;
		}
		else if(a[n-1]<=m){
			printf("Case #%d:\nwhy am I so diao?\n",Case++);
			continue;		
		}
		else{
		for(LL i=0;i<n;i++){
			if(a[i]<=m && a[i+1]>m){
				m=i;
				break;	
			}
		}   //找到小于等于m的最大值 
		for(int i=m;i<n;i++){
			if(a[i]+k>=a[i+1]){
				k--;
			}
			else{
				flag=0;
			}
		}
		if(flag)
		printf("Case #%d:\nwhy am I so diao?\n",Case++);
		else
		printf("Case #%d:\nmadan!\n",Case++);
		}
		}
	return 0;
}
 
