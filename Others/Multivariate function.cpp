#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int T,n;
	double a[1100],p[1100];
	cin>>T;
	while(T--){
		cin>>n;
		for(int i=1;i<=n;++i)	cin>>a[i];
		p[n] = 0;
		for(int i=n-1;i>=3;--i){
			double mmax = p[i+1];
			for(int j=i+1;j<=n;++j){
				mmax = max(mmax,a[i]/a[j]);
			}
			p[i] = mmax;
		}
//		for(int i=3;i<n;++i)
//				cout<<p[i]<<' ';
//		cout<<endl;
		double ans = 0;
		for(int i=1;i<=n-3;++i){
			for(int j=i+1;j<=n-2;++j){
				ans = max(ans,(a[j]/(a[i]+a[j])*p[j+1]-(a[i]/(a[i]+a[j]))));
			}
		}
		printf("%.3lf\n",ans);
	}
	return 0;
}
/*
2
4
1.0 2.0 3.0 4.0
5
1.6 2.6 7.1 2.3 2.6
*/
