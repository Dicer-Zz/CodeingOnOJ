#include<stdio.h>
#include<algorithm>
using namespace std;
struct node{
	int begin;
	int end;
}time[105];
int compare(node a,node b){
	if(a.end>b.end)
        return 0;
    else if(a.end<b.end)
        return 1;
    else{
        if(a.begin>b.begin)
            return 1;
        else
            return 0;
    }
}
int main(){
	int n;
	while(scanf("%d",&n),n){
	for(int i=0;i<n;i++)
	scanf("%d%d",&time[i].begin,&time[i].end);
    sort(time,time+n,compare);
    int mark=time[0].end;
    int sum=0;
    for(int i=0;i<n;i++){
        if(time[i].begin>=mark){
            sum++;
            mark = time[i].end;
        }
    }
    printf("%d\n",sum);}
	return 0;
}
