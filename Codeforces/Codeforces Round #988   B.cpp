#include<bits/stdc++.h>
using namespace std;

struct str{
	int sum;
	string s;
}ss[200];

bool cmp(str x,str y){
	return x.sum > y.sum;
}

int main(void){
	int n;
	cin>>n;
	for(int i = 1; i<= n ; i++){
		cin>>ss[i].s;
		ss[i].sum = 0;
	}
	int flag = 2;
	for(int i = 1; i <= n ;i++){
		for(int j = 1 ; j <= n;j++){
			if(ss[j].s.find(ss[i].s) != -1){		//
				ss[i].sum++;
			}
		}
		if(ss[i].sum==1){
			flag--;
		}
	}
//	printf("flag : %d\n",flag);
//	for(int i=1;i<=n;i++){
//		cout<<ss[i].sum<<endl;
//	}
	if(flag<=0)	printf("NO\n");
	else{
		printf("YES\n");
		sort(ss+1,ss+n+1,cmp);
		for(int i=1;i<=n;i++){
			cout<<ss[i].s<<endl;
		}
	}
	return 0;
}
