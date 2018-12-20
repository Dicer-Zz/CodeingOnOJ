/*---------------------------------

 @Author:   Dicer
 @DateTime: 2018-12-20 11:13:44

---------------------------------*/

#include <iostream>
#include <algorithm>
using namespace std;
const int MAXN = 1e5;
const int MAXM = 1e5;

int a[MAXN];
int l, n, m;
bool go(int x){
	int cur = -1000000000, cnt = 0;
	for(int i=0;i<=n+1;++i){
		if(a[i]-cur >= x){
			cur = a[i];
			cnt++;
		}
	}
	return cnt >= n+2-m;
}
int main(int argc, char const *argv[])
{
	cin >> l >> n >> m;
	a[0] = 0;
	for(int i=1;i<=n;++i)	cin >> a[i];
	a[n+1] = l;
	sort(a,a+n+2);
	int l, r, mid;
	l = 0, r = 1000000000;
	while(l<=r){
		mid = (l+r)>>1;
		if(go(mid)){
			l = mid+1;
			// cout << mid << endl;
		}
		else	r = mid-1;
	}
	cout << r << endl;
	return 0;
}