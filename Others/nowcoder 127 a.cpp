/*nowcoder 127 a */ 

#include<bits/stdc++.h>
using namespace std;

int n,k,a[3333],flag = 0,sum = 0;
void dfs(int kk,int ant){		//≤È’“kk 
	if(ant==0)	return;
	if(kk==0 && ant==0){
		flag = 1;
		return ;
	}
	int p = upper_bound(a,a+n,kk)-a;
	for(int i=0;i<p;i++){
		if(a[i]==kk && ant){
			flag = 1;
			return ;
		}
		else if(ant){
			dfs(kk-a[i],ant-1);
		}
		sum++;
	}
}
int main(void){
	cin>>n>>k;
	for(int i=0;i<n;i++)
		cin>>a[i];
	sort(a,a+n);
	dfs(k,3);
//	cout<<"sum:"<<sum<<endl;
	if(flag)	printf("o hu~\n");
	else	printf("wo yo wo yo~\n");
	return 0;
}
