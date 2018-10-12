#include<iostream>
#include<stdio.h>
#include<string>
#include<algorithm>
using namespace std;

string splus(string a,string b){
	string c;
	reverse(a.begin(),a.end());
	reverse(b.begin(),b.end());
	int l = min(a.size(),b.size());
	int temp = 0;
	for(int i=0;i<l;++i){
		c += (a[i]-'0' + b[i]-'0' + temp)%10+'0';
		temp = (a[i]-'0' + b[i]-'0' + temp)/10;
	}
	if(l != a.size()){
		for(int i=l;i<a.size();++i){
			c += (a[i]-'0'+temp)%10 + '0';
			temp = (a[i]-'0'+temp)/10;
		}
	}
	else{
		for(int i=l;i<b.size();++i){
			c += (b[i]-'0'+temp)%10 + '0';
			temp = (b[i]-'0'+temp)/10;
		}
	}
	if(temp) c += temp+'0';
	reverse(c.begin(),c.end());
	return c;
}
string f[10001];
void init(){
//	for(int i=0;i<=10000;++i)
//		f[i].clear(); 
	f[0] = "0";
	f[1] = "1";
	for(int i=2;i<=10000;++i){
		f[i] = splus(f[i-1],f[i-2]);
		cout<<f[i]<<endl;
	}
//	string s;
//	cout<<"max_size: "<<s.max_size()<<endl;
} 
int main(){
	init();
	int T;
	string n;
	cin>>T;
	while(T--){
		cin>>n;
		for(int i=2;i<=10000;++i){
			if(f[i] == n){
				cout<<i<<endl;
				break;
			}
		}
	}
	return 0;
}
