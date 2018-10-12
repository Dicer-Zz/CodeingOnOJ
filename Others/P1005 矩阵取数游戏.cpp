#include <bits/stdc++.h>
using namespace std;
#define bll __int128
#define k m-(r-l)
typedef long long ll;

inline void in(__int128 &s)
{
    s=0;
    char c=' ';
    while(c>'9'||c<'0') c=getchar();
    while(c>='0'&&c<='9')
    {
        s=s*10+c-'0';
        c=getchar();
    }
}

inline void print(__int128 x)
{
    if(x>9)
        print(x/10);
    putchar(x%10+'0');
}
int n,m;
int a[100];
bll ans = 0,p[100],f[100][100];
bll dp(int l,int r){
	if(f[l][r] != -1)	return f[l][r];
	if(r>l)	f[l][r] = max(dp(l+1,r)+a[l]*p[k],dp(l,r-1)+a[r]*p[k]);
	else	f[l][r] = a[l]*p[k];
	return f[l][r];
}	
int main(){
	
	cin>>n>>m;
	p[0] = 1;
	for(int i=1;i<=m;++i)	p[i] = 2*p[i-1];
	while(n--){
		for(int i=0;i<m;++i)	cin>>a[i];
		memset(f,-1,sizeof(f)); 
		ans += dp(0,m-1); 
	}
	print(ans);
    return 0;
}