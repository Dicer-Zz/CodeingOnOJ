#include<bits\stdc++.h>
using namespace std;

int n;
long long m,sum1,sum2;
struct songs{
	long long a,b;
}s[100000];
bool cmp(songs a,songs b){
	return a.a-a.b > b.a-b.b;
}
int main(){
	sum1 = 0;sum2 = 0;
	cin>>n>>m;
	for(int i=0;i<n;++i){
		cin>>s[i].a>>s[i].b;
		sum1 += s[i].a;
		sum2 += s[i].b;
	}
	if(sum1 <= m)	cout<<0<<endl;
	else if(sum2 > m)	cout<<-1<<endl;
	else{
		int cnt = 0;
		sum2 = 0;
		sort(s,s+n,cmp);
		for(int i=0;i<n;++i){
			cnt++;
			sum2 += s[i].a - s[i].b;
			if(sum2 >= sum1-m)	break;
		}
		cout<<cnt<<endl; 
	}
	return 0;
} 
