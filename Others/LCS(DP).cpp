#include<stdio.h>
#include<string.h>
#include<algorithm>
#include<iostream>
#include<math.h>
#define maxn 1200
using namespace std;

char s1[maxn],s2[maxn];
int dp[maxn][maxn];

int main(){
	scanf("%s %s",s1,s2);
	int len1 = strlen(s1),len2 = strlen(s2);
	//puts(s1),puts(s2);
	memset(dp,0,sizeof(dp));
	for(int i=0;i<len1;i++){
		for(int j=0;j<len2;j++){
			if(s1[i] == s2[j]){
				dp[i+1][j+1] = dp[i][j] + 1;
			}
			else{
				dp[i+1][j+1] = max(dp[i][j+1],dp[i+1][j]);
			}
			//printf("dp[%d][%d] :%d\n",i+1,j+1,dp[i+1][j+1]);
		}
	}
	printf("%d\n",dp[len1][len2]);
	return 0;
} 
