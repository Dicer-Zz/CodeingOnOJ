#include<iostream>
#include<string>
using namespace std;

int main(void){
	int n,al,bl,ans;
	string a,b;
	cin>>n;
	while(n--){
		ans = 0;
		cin>>a>>b;
		al = a.length();
		bl = b.length();
		for(int i=0;i<=bl-al;i++){
			if(a == b.substr(i,al)){
				ans++;
			}
		}
		cout<<ans<<'\n';
	}
	return 0;
} 
