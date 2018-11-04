#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	map<int, bool>	mp;
	string ss;
	cin >> n;
	int l = 0, r = 1e9, mid;
	cout << "0 1\n" << flush;
	cin >> ss;
	mp[0] = (ss == "white");
	n--;
	while(n--){
		mid = (l+r)>>1;
		cout << mid << " 1\n" << flush;
		cin >> ss;
		mp[mid] = (ss == "white");
		if(mp[mid] != mp[l])	r = mid;
		else	l = mid;
	}
	cout << l << " 2 " << r << " 0\n" << flush;
	return 0;
}