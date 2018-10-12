#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,m;
	while(cin>>n>>m){
		if(n+m==0)	break;
		int len = sqrt(m*2)-2;
		int a;
		while(len--){
			a = m/len-(len+1)/2;
			if((a*2+len+1)*(len)/2==m){
				printf("[%d,%d]\n",a,a+len); 
			}
		}
		printf("\n");
	}
	return 0;
}
