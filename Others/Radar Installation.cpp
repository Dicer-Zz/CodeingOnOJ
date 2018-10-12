#include<stdio.h>
#include<algorithm>
#include<string.h>
#include<math.h>
using namespace std;
struct node{
	int x,y;
	float start,end;
}a[1005];
bool cmp(node x,node y){
	if(x.end == y.end)
		return x.start > y.start;
	else
		return x.end < y.end;
} 
int main(){
	int n,d;
	int f = 0;
	float len;
	int kase = 1;
	while(~scanf("%d %d",&n,&d) && n+d){
		for(int i=0;i<n;i++){
			scanf("%d %d",&a[i].x,&a[i].y);
			if(a[i].y > d || d < 0){
				f = 1;
			}
			if(f)
				len = 0;
			else
				len = sqrt(1.0*d*d - a[i].y * a[i].y);
			a[i].start = a[i].x - len;
			a[i].end   = a[i].x + len;
		}
		printf("Case %d: ",kase++);
		if(f){
			printf("-1\n");	
			continue;	
		}
		sort(a,a+n,cmp);
	/*	for(int i=0;i<n;i++){
		//	printf("%d %d\n",a[i].x,a[i].y);
			printf("%.2f %.2f\n",a[i].start,a[i].end);
		}  */
		int total = 1;
		float flag = a[0].end;
		for(int i=0;i<n;i++){
			if(flag < a[i].start){
				total++;
				flag = a[i].end;
			}
			else if(a[i].end > flag)  
            flag = a[i].end;
		}
		if(!f)
			printf("%d\n",total);
	} 
	return 0;
}
