#include<stdio.h>
#include<algorithm>
using namespace std;
int st[500010];
int main(){
	int L,n,m;
	while(scanf("%d%d%d"),&L,&n,&m){
		for(int i=0;i<n;i++)
		scanf("%d",&st[i]);
		sort(st,st+n);
		int max=L;
		int min=0;
		int mid;
		int flag=1;
		while(max!=min){
			for(int i=0;i<n;i++){
			if(small){
			mid = (min+max)/2;
			if(i=0){
				if(st[0]>mid){
					min=mid;
					break;
				}
			}
			else if(i=n-1){
				if(L-st[i]>mid){
					min=mid;
					break;
				}
			}
			else{
				if(s[i]-s[i-1]>mid){
					min=mid;
					break;
				} 
			}		
		}
			else if(big){
			mid = (min+max)/2;
			if(i=0){
				if(st[0]<=mid){
					
				}
			}
			else if(i=n-1){
				if(L-st[i]<=mid){
					
				}
			}
			else{
				if(st[i]-st[i-1]<=mid){
					
				}
			} 
		}
	}
	} 
	return 0;
} 
