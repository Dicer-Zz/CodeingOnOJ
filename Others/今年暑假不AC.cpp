#include<stdio.h>
#include<algorithm>
#include<string.h>
using namespace std;
struct node{
	int start;
	int end;
}a[105]; 
int cmp(node x,node y){
	if(x.end == y.end)
		return x.start > y.start;
	else
		return x.end < y.end;
}
int main(){
	int n;
	while(scanf("%d",&n)==1 && n){
		for(int i=0;i<n;i++)
		scanf("%d %d",&a[i].start,&a[i].end);
		sort(a,a+n,cmp);
		int total=1;
	//	for(int i=0;i<n;i++)
	//	printf("%d %d\n",a[i].start,a[i].end);
		int end = a[0].end;
		for(int i=0;i<n;i++){
			if(end <= a[i].start){
				end = a[i].end;
				total++;
			}
		}
		printf("%d\n",total);
	}
	return 0;
}
