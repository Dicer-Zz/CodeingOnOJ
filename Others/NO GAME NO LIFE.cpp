#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int n,m,x;
	priority_queue<ll ,vector<ll >, greater<ll > > que;
	scanf("%d %d",&n,&m);
	for(int i=0;i<n;++i){
		scanf("%d",&x);
		que.push(x);
	}
	ll a,b,ans = 0;
	while(que.size() >= 2){
		a = que.top();
		que.pop();
		b = que.top();
		que.pop();
		if(a < b)	swap(a,b);
		if(a >= b*2){
			que.push(a);
		}
		else{
			que.push(2*b);
		}
	}
	ans = que.top();
	que.pop();
	printf("%lld\n",ans);
	return 0;
}
