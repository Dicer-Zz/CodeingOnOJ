#include<iostream>
using namespace std;

int main(void){
	int n,cnt,a[1000],ans,p;
	while(cin>>n && n){
		p = n;
		cnt = 0;ans = 0;
		for(int i=2;i*i<=n;++i){
			if(n%i==0)	a[cnt++] = i;
			while(n%i==0)	n /= i;
		}
		if(n != 1)	a[cnt++] = n;
		for(int i=1;i<(1 << cnt);++i){
			int sum = 0,temp = 1;;
			for(int j=0;j<cnt;++j){
				if((i>>j)&1){
					sum++;
					temp *= a[j];
				}
			}
			if(sum&1)	ans += p/temp;
			else	ans -= p/temp;	
		}
		cout<<p-ans<<endl;
	} 
	return 0;
} 
