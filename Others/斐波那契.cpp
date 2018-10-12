#include<iostream>
#include<stdio.h>
#include<string>
using namespace std;
const int mod = 1e5;
long long f[10000];
void init(){
	f[0] = 0;
	f[1] = 1;
	for(int i=2;i<=10000;++i)
		f[i] = (f[i-1] + f[i-2])%mod;
}
int main(){
	init();
	int T,n;
	string s;
	cin>>T;
	while(T--){
		cin>>s;
		n = 0;
		for(int i=0;i<s.size();++i)
			n = (n*10 + s[i] - '0')%mod;
		for(int i=2;i<=10000;++i){
			if(f[i] == n){
				cout<<i<<endl;
				break;
			}
		}
	} 
	return 0;
}
