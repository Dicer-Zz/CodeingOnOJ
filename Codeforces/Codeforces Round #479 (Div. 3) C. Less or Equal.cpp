#include<bits/stdc++.h>
using namespace std;

int n,k;
int a[220000];
int main(void){
	cin>>n>>k;
	for(int i=1;i<=n;i++)	cin >> a[i];
	sort(a+1,a+n+1);
	if(k == 0){
		if(a[1]==1)	cout << -1 << '\n';
		else	cout << 1 << '\n';
	}
	else if(k == n)	cout << a[n] << '\n';
	else{
		if(a[k] == a[k+1])	cout << -1 << '\n';
		else	cout << a[k] << '\n';
	}
	return 0;
}
