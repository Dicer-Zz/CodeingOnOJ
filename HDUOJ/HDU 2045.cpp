#include<bits/stdc++.h>
using namespace std;

int main(){
	int  n;
	long long a[55];
	a[1] = 3;a[2] = 6;a[3] = 6;
	for(int i=4;i<55;i++){
		a[i] = a[i-1]+a[i-2]*2;
		//printf("%lld\n",a[i]);
	}
	while(cin>>n){
		printf("%lld\n",a[n]);
	}
	return 0;
}
