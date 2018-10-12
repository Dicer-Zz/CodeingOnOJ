#include<stdio.h>
#include<algorithm>
using namespace std;
int ball[55];
int main(){
	int n;
	while(scanf("%d",&n)==1){
		for(int i=0;i<n;i++)
		scanf("%d",&ball[i]);
		sort(ball,ball+n);
		for(int i=0;i<n-1;i++)
		if(ball[i]==ball[i+1])
			ball[i] = 1005;
		sort(ball,ball+n);
		int flag=0;
	//	for(int i=0;i<n;i++)
	//	printf("%d ",ball[i]);
		for(int i=0;i<n-2;i++){
			if(ball[i]+2==ball[i+1]+1 && ball[i+1]+1==ball[i+2]){
				flag=1;
				break;
			}
		}
		if(flag)
		printf("YES\n");
		else
		printf("NO\n");
	} 
	return 0;
}
