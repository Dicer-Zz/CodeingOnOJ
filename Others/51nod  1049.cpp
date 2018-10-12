#include<iostream>
using namespace std;

int n;
long long a[60000],dp[60000];
int main(void){
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>a[i];
	dp[0] = a[0];
	long long ans = dp[0];
	for(int i=1;i<n;i++){
		if(dp[i-1] >= 0){
			dp[i] = a[i]+dp[i-1];
			ans = max(ans,dp[i]);
		}
		else{
			dp[i] = a[i];
			ans = max(ans,dp[i]);
		}
	}
	cout<<ans<<'\n';
	return 0;
} 
