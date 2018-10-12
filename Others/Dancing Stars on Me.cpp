#include <bits/stdc++.h>
using namespace std;
typedef pair<int ,int > pii;
struct node{
	int x,y;
}p[200];
map<pii,bool> mp;
int main(int argc, char const *argv[])
{
	int n,T;
	scanf("%d",&T);
	while(T--){
		int mx = 0,my = 0;
		mp.clear();
		scanf("%d",&n);
		for(int i=0;i<n;++i){
			scanf("%d %d",&p[i].x,&p[i].y);
			mp[pii(p[i].x,p[i].y)] = true;
			mx = max(mx,p[i].x);
			my = max(my,p[i].y);
		}
		// printf("%d %d\n", mx,my);
		bool flag = 0;
		for(int i=0;i<n;++i){
			int x = p[i].x,y = p[i].y;
			for(int j=1;(x+j <= mx && y+j <= my);++j){
				if(mp[pii(x+j,y)] && mp[pii(x,y+j)] && mp[pii(x+j,y+j)]){
					flag = 1;
					break;
				}
			}
		}
		if(flag)	printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}