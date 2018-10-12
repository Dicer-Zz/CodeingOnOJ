#include<stdio.h>
#include<iostream>
#include<algorithm>
using namespace std;
const int maxn=1e5+100;
int n,m;
int a[maxn],b[maxn];
int main(){
	scanf("%d %d",&n,&m);
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(int i=0;i<m;i++)
		scanf("%d",&b[i]);
	int ans = 0,temp;
	for(int i=0;i<n;i++){
		int x = lower_bound(b,b+m,a[i]) - b;
		if(x == 0){
			temp = abs(b[x] - a[i]);
		}
		else if(x==m){
			temp = abs(b[x-1] - a[i]);
		}
		else{
			temp = min(abs(b[x-1] - a[i]),abs(b[x] - a[i]));
		}
		ans = max(ans,temp);
	}
	cout << ans << endl;		
	return 0;
}
