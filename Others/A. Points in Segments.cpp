#include<bits\stdc++.h>
using namespace std;

int main(){
	int n,m,l,r,a[110];
	memset(a,0,sizeof(a));
	cin>>n>>m;
	for(int i=0;i<n;++i){
		cin>>l>>r;
		for(int j=l;j<=r;++j)
			a[j] = 1; 
	}
	int cnt = 0;
	for(int i=1;i<=m;++i)
		if(a[i] == 0)	cnt++;
	cout<<cnt<<endl;
	bool flag = 1;
	for(int i=1;i<=m;++i)
		if(a[i] == 0){
			if(flag){
				cout<<i;
				flag = 0;
			}
			else	cout<<' '<<i;
		}
	cout<<endl;
	return 0;
}
