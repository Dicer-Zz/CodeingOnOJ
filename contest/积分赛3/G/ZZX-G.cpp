#include <cstdio>
#include <cstring>
#include <cmath>
#include <queue>
#include <algorithm>
using namespace std;
typedef long long LL;
const int INF = 0x3f3f3f3f;
const int MAXN = 1E5+11;
int a[MAXN];
int b[MAXN];
int n,p,x,k,tl;
bool check(int tk){
	int cnt = 0;//处理到tk长需要的替换次数
	for (int i = 0; i < tl; ++i){
		if (b[i] > tk){
			cnt += (b[i] - tk)/(tk + 1);
		}
	}
	if (cnt <= k) return true;
	return false;
}

int main(){
	//freopen("in.txt","r",stdin);
	//freopen("oudata.txt","w",stdout);
	while (~scanf("%d %d %d %d",&n,&p,&x,&k)){
		memset(a,0,sizeof(a));
		int cx = 0;
		for (int i = 0; i < n; ++i){
			scanf("%d",&a[i]);
			if (a[i] == x) cx++;
		}
		if (cx <= k) puts("0");
		else{
			int tml = 0;int j;
			tl = 0;
			for (int i = 0; i < n; ){
				if (a[i] == x){
					j = i; tml = 0;
					while (j < n && a[j++] == a[i]){
						tml++;
					}
					b[tl++] = tml; tml = 0; i = j;
				}else ++i;
			}

			int l = 0,r = n;
			while (l <= r){
				int mid = (l + r)>>1;
				if (check(mid)) r = mid - 1;
				else l = mid + 1;
			}
			printf("%d\n",r+1);
		}
	}
    return 0;
}

