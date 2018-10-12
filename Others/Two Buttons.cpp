#include<iostream>
using namespace std;

int dfs(int n,int m){
	int total = 0;
	if(n>=m)	return n-m;
	while(n!=m){
		if(n<m){
			if(m%2==0){
				m /= 2;
				total++;
			}
			else{
				m = (m+1)/2;
				total+=2;
			}
		}
		else{
			m++;
			total++;
		}
	}
	return total;
}
int main(void){
	int n,m;
	cin>>n>>m;
	cout<<dfs(n,m)<<endl;
	return 0;
}
