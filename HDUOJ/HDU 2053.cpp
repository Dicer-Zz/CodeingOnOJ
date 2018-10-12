/*HDU 2053 Switch Game*/ 
#include<bits/stdc++.h>
const int maxn = 1.2e5;
using namespace std;

int a[maxn],sum;
int main(void){
	memset(a,0,sizeof(a));
	for(int i = 0;i<maxn;i++){
		sum = 0;
		for(int j=1;j<=sqrt(i);j++){
			if(i % j == 0){
				if(j!=sqrt(i)){
					sum += 2;
				}
				else	sum++;
			}
		}
		if(sum % 2 == 1) 	a[i] = 1;	
	}
	int n;
	//cout<<maxn<<endl;
	while(cin>>n){
		cout<<a[n]<<endl;
	}
	return 0;
}
