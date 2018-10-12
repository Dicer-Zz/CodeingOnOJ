#include<bits/stdc++.h>
using namespace std;

int x[15],lside[15],rside[15];
int n,kase;

void dfs(int i,int l,int r){
	if(i > 10){
		kase = 1;
		return ;	
	}
	if(kase)	return ;
	if(x[i]>lside[l]){
		lside[l+1] = x[i];
		dfs(i+1,l+1,r);
	}
	if(x[i]>rside[r]){
		rside[r+1] = x[i];
		dfs(i+1,l,r+1);
	}
}
int main(void){
	cin>>n;
	while(n--){
		for(int i=1;i<=10;i++)
			cin>>x[i];
		kase = 0;
		dfs(1,0,0);
		if(kase)	printf("YES\n");
		else	printf("NO\n");
	}
	return 0;
} 
