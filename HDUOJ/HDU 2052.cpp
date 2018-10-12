/*HDU 2052 Picture */ 
#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,m;
	while(cin>>n>>m){
			cout<<'+';
			for(int i=0;i<n;i++)
				cout<<'-';
			cout<<'+'<<endl;
			for(int i=0;i<m;i++){
				for(int j=0;j<n+2;j++){
					if(j==0||j==n+1)
						cout<<'|';
					else
						cout<<' ';
				}
				cout<<endl;
			}
			cout<<'+';
			for(int i=0;i<n;i++)
				cout<<'-';
			cout<<'+'<<endl<<endl;
	} 
	return 0;
}
