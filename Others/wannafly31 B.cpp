#include<bits/stdc++.h>
using namespace std;

char mp[100][100];
int main(){
	int T,n,m,dx,dy;
	cin>>T;
	while(T--){
		cin>>n>>m;
		for(int i=0;i<n;++i)	scanf("%s",mp[i]);
		for(int i=0;i<n;++i)
		for(int j=0;j<m;++j)
		if(mp[i][j] == 'S'){
			dx = i,dy = j;
			break;
		}
		bool flag = 0;
		for(int i=0;i<m;++i)
		if(mp[dx][i] == '#'){
			flag = 1;
			break;
		}
		for(int i=0;i<n;++i)
		if(mp[i][dy] == '#'){
			flag = 1;
			break;
		}
		if(flag)	cout<<-1<<endl;
		else	cout<<n+m-2<<endl;			
	}
	return 0;
} 
