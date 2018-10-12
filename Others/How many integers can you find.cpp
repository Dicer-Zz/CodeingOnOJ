#include<iostream>
using namespace std;
int gcd(int a,int b){
	while(b^=a^=b^=a%=b);
	return a;
}
int lcm(int a,int b){
	return a/gcd(a,b)*b;
}
int main(void){
	int n,m,a[20],p,cnt,ans;
	while(cin>>n>>m){
		ans = 0;
		cnt = 0;
		for(int i=0;i<m;++i){
			cin>>p;
			if(p != 0 && p < n)
				a[cnt++] = p;
		}
		for(int i=1;i<(1 << cnt);++i){
			int LCM = 1,sum = 0;
			for(int j=0;j<m;++j){
				if((i >> j)&1){
					sum++;
					LCM = lcm(LCM,a[j]);
				}
			}
			if(sum&1)	ans += (n-1)/LCM;
			else	ans -= (n-1)/LCM;
		}
		cout<<ans<<endl;
	}
	return 0;
}
