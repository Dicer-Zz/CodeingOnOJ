#include<stdio.h>
#include<string.h>
#include<algorithm>
using namespace std;
struct node{
	int pre;
	int start;
	int end;
}a[10005];
bool cmp(node x,node y){
	if(x.start == y.start){
		if(x.end == y.end)
			return x.pre > y.pre;
		else
			return x.end > y.end;
	}
	else
		return x.start < y.start;
}
int seat[2000];
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		memset(seat,0,sizeof(seat));
		int n;
		int ha,ma,hl,ml;
		int max = 0;
		scanf("%d",&n);
		for(int i=0;i<n;i++){
			scanf("%d %d:%d %d:%d",&a[i].pre,&ha,&ma,&hl,&ml);
			a[i].start = ha * 60 + ma;
			a[i].end = hl * 60 + ml;
			for(int j=a[i].start;j<a[i].end;j++){
				seat[j] += a[i].pre;
				 max = (max > seat[j])?max:seat[j];
			}
		}
		printf("%d\n",max);
	}
	return 0;
}
