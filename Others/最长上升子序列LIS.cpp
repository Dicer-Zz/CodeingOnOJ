#include<stdio.h>
#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;

int s[2000],dp[2000];
int main(){
	int n;
	scanf("%d",&n);
	//fill(dp,dp+n,1);
	for(int i=0;i<n;i++){
		scanf("%d",&s[i]);
		dp[i] = 1;
	}
	int temp = 1;
	for(int i=0;i<n;i++){
  		for(int j=0;j<i;j++){
  	 		if(s[i] > s[j]){
  	 		dp[i] = max(1,dp[j]+1);
			}
		}
		temp = max(temp,dp[i]);
	}
	printf("%d\n",temp);
	return 0;
}
