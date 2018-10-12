#include<bits/stdc++.h>
using namespace std;
const int maxn = 2e5+100;
int c[maxn];
int a[maxn];
bool vis[maxn];
int pre[maxn];
int find(int x){
	while(x != pre[x])	x = pre[x];
	return x;
}
int main(){
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;++i)	scanf("%d",&c[i]);
	for(int i=1;i<=n;++i)	scanf("%d",&a[i]);
	for(int i=1;i<=n;++i)	pre[i] = i;
	for(int i=1;i<=n;++i){
		int fa = find(i),fb = find(a[i]);
		if(fa != fb){
			pre[fa] = fb;
		}
	}
	int res = 0;
	for(int i=1;i<=n;++i){
		if(!vis[find(i)]){
			res += c[find(i)];
			vis[find(i)] = 1;
		}
	}
	printf("%d\n",res);
	return 0;
} 
