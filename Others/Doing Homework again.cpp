#include<stdio.h>
#include<algorithm>
#include<string.h>
using namespace std;
struct node{
	int end;
	int score;
}a[1005];
bool cmp(node x,node y){
	if(x.score == y.score)
		return x.end < y.end;
	else
		return x.score > y.score;
} 
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		for(int i=0;i<n;i++)
		scanf("%d",&a[i].end);
		for(int i=0;i<n;i++)
		scanf("%d",&a[i].score);
		sort(a,a+n,cmp);
		int total = 0;
		int flag[100005];
		memset(flag,0,sizeof(flag));
		for(int i=0;i<n;i++){
			int j = a[i].end;
			while(j){
				if(!flag[j]){
					flag[j] = 1;
					break;
				}
				j--;
			}
			if(j==0)
				total += a[i].score;
		}
		printf("%d\n",total);
	}
	return 0;
}
