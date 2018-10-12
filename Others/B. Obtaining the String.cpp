#include<bits\stdc++.h>
using namespace std;

int main(){
	int n,a[30],b[30],m[10010];
	memset(a,0,sizeof(a));
	memset(b,0,sizeof(b));
	string s,t;
	cin>>n;
	cin>>s>>t;
	for(int i=0;i<n;++i){
		a[s[i]-'a']++;
		b[t[i]-'a']++;
	}
	bool flag = 0;
	for(int i=0;i<26;++i){
		if(a[i] != b[i]){
			flag = 1;
			break;
		}
	}
	if(flag)	cout<<-1<<endl;
	else{
		int cnt = 0,pos;
		for(int i=0;i<n;++i){
			if(s[i] != t[i]){
				for(int j=i+1;j<n;++j){
					if(s[j] == t[i]){
						pos = j;
						break;
					}
				}
				for(int j=pos;j>i;--j){
					m[cnt++] = j;
					swap(s[j],s[j-1]);
				}
			}
		}
		if(cnt <= 10000){
			cout<<cnt<<endl;
			for(int i=0;i<cnt;i++){
				if(i==0)	cout<<m[i];
				else	cout<<' '<<m[i];
			}
			cout<<endl;
		}
		else 	cout<<-1<<endl;
	}
	return 0;
}
