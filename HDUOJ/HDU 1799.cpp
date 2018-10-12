/*HDU 1799  循环多少次？  递推公式求组合数 */ 

#include<bits/stdc++.h>
using namespace std;

int a[2100][2100] = {0};

void inti(void){
	a[0][0] = 1;
	for(int i=1;i<2100;i++){		//C(i,j)
		a[i][0] = 1;
		for(int j=1;j<=i;j++){
			a[i][j] = (a[i-1][j-1] + a[i-1][j])%1007;		
		}
	}
}
int main(void){
	int t,n,m;
	cin>>t;
	inti();
	while(t--){
		cin>>m>>n;
		cout<<a[n][m]<<endl; 
	}
	return 0;
} 
