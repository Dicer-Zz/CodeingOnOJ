#include<cstdio>
#include<cstring>
#include<vector>
#include<iostream>
#include<algorithm>
using namespace std;
typedef long long ll;
vector<ll> vecx,vecy;
ll a[30];
int main()
{
	//freopen("in.txt","r",stdin);
	//freopen("out.txt","w",stdout);
	
	a[0]=1;
	for(ll i=1;i<=20;i++){
		a[i]=i*a[i-1];
	}
	int T;
	scanf("%d",&T);
	int Case=1;
	ll x,y;
	while(T--){
		scanf("%lld%lld",&x,&y);
		ll n=x,m=y;
		int flagx=0;
		int flagy=0;
		for(ll i=20;i>=1;i--){
			
			if(x-a[i]>=0){
				vecx.push_back(i);
				x-=a[i];
				if(x==0) flagx=1;
			} 
			
			if(y-a[i]>=0){
				vecy.push_back(i);
				y-=a[i];
				if(y==0) flagy=1;
			} 
		}
		printf("Case %d:",Case++);
		if(flagx+flagy==2){
			printf("SEYES\n");
			if(vecx.size()==vecy.size()){
				
				printf("%lld=%lld!",n,vecx[vecx.size()-1]);
				for(ll i=vecx.size()-2;i>=0;i--)
					printf("+%lld!",vecx[i]);
				printf("\n");
				
				printf("%lld=%lld!",m,vecy[vecy.size()-1]);
				for(ll i=vecy.size()-2;i>=0;i--)
					printf("+%lld!",vecy[i]);
				printf("\n");
				
			}else{
				printf("dWvWb\n");
			}
		}else if(flagx+flagy==1){
			printf("YNEOS\n");
			printf("dWvWb\n");
		}else{
			printf("ONO\n");
			printf("dWvWb\n");
		}
		
		vecx.clear();
		vecy.clear();
	}
	
	return 0;
}
