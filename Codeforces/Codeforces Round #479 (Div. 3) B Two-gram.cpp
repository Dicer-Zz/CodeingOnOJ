#include<iostream>
#include<map>
using namespace std;
int main(void){
	int n,max = 0;
	cin>>n;
	string a,b,ans;
	cin>>a;
	map<string , int> m;
	for(int i=0;i<n-1;i++){
		b = a.substr(i,2);
		m[b]++;
		if(max < m[b]){
			ans = b;
			max = m[b];
		}
	}
	cout<<ans<<'\n';
	return 0;
}
