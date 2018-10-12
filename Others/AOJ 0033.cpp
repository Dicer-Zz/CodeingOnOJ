/*AOJ 0033 ball DFS*/ 
#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;

int ball[15],lside[15],rside[15];
int kase;

void dfs(int i,int l,int r){
	if(i> 10){
		kase = 1;
		return;
	}
	if(kase)	return;
	if(ball[i]>lside[l-1]){
		lside[l] = ball[i];
		dfs(i+1,l+1,r);
	}
	if(ball[i]>rside[r-1]){
		rside[r] = ball[i];
		dfs(i+1,l,r+1);
	}
}


int main(void){
	int n;
	scanf("%d",&n);
	while(n--){
		for(int i=1;i<=10;i++)
			scanf("%d",&ball[i]);
		kase = 0;
		dfs(1,1,1);
		if(kase)	printf("YES\n");
		else	printf("NO\n");
	}
	return 0;
}
