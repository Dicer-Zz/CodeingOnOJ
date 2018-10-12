#include<bits\stdc++.h>
#include<map>
using namespace std;

map<int ,int> mmp;
int main(void){
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0); 
	int n,a,ans,mmin,mmax;
	while(cin>>n){
		ans = 0;
		mmin = n;
		mmax = 1;
		mmp.clear();
		for(int i=0;i<n;++i){
			cin>>a;
			mmp[a]++;
			mmin = min(mmin,a);
			mmax = max(mmax,a);
		}
		for(int i=mmin;i<=mmax;++i){
			ans += mmp[i]/2;
			mmp[i] %= 2;
			if(mmp[i]&1 && mmp[i+1]&1 && mmp[i+2]){
				ans++;
				mmp[i]--;
				mmp[i+1]--;
				mmp[i+2]--;
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}
