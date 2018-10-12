#include<bits\stdc++.h>
using namespace std;

int n,k,m[210000];
long long s;
int main(){
	cin>>n>>k>>s;
	if(k * (n-1) < s || k > s)	cout<<"NO"<<endl;
	else{
		int cnt = 0,pos = 1;
		bool flag = 1;
		while(s > n-1 && s-(n-1) >= k){
			s -= n-1;
			k--;
			if(flag){
				m[cnt++] = n;
				flag = 0;
				pos = n;
			}
			else{
				m[cnt++] = 1;
				flag = 1;
				pos = 1;
			}
		}
		while(k>1){
			if(pos == 1){
				m[cnt++] = 2;
				pos = 2;
				k--;
				s--;
			}
			else if(pos == 2){
				m[cnt++] = 1;
				pos = 1;
				k--;
				s--;
			}
			else if(pos == n){
				m[cnt++] = n-1;
				pos = n-1;
				k--;
				s--;
			}
			else if(pos == n-1){
				m[cnt++] = n;
				pos = n;
				k--;
				s--;
			}
		}
		if(n - pos >= s && k)	m[cnt++] = pos+s;
		else if(pos - 1 >= s && k)	m[cnt++] = pos-s;
		else	cout<<"NO"<<endl;
		cout<<"YES"<<endl;
		cout<<m[0];
		for(int i=1;i<cnt;++i)
			cout<<' '<<m[i];
		cout<<endl;
	}
	return 0;
}
