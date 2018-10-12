/*HDU 2051 Bitset*/
#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,digital;
	int a[10];
	while(cin>>n){
		digital = 0;
		while(n){
			a[digital++] = n%2;
			n /= 2;
		}
		for(int i=digital-1;i>=0;i--)
			cout<<a[i];
		cout<<endl;
	}
	return 0;
}
