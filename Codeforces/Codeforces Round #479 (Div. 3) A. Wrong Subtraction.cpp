#include<bits/stdc++.h>
using namespace std;

int main(void){
	int n;
	char a[15];
	cin>>a>>n;
	int l = strlen(a);
	while(n--){
		if(a[l-1]=='0'){
			a[l-1] = '\0';
			l--;
		}
		else	a[l-1]--;
	}
	cout<<a<<'\n';
	return 0;
}
