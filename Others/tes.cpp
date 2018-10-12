#include <iostream>
#include<cstdio>
using namespace std;
typedef long long LL;
const int maxn=1e7+5,maxn2=7e5;
int pri[maxn2];   
bool tag[maxn];
int top=0;
void getpri(){
	for(int i=2;i<maxn;i++){
		if(!tag[i])pri[top++]=i;
		for(int j=0;j<top&&i*pri[j]<maxn;j++){
			tag[i*pri[j]]=1;
			if(i%pri[j]==0)break;
		}
	}
} 
int main(int argc, char *argv[]) {
	//freopen("cin.txt","r",stdin);
	int n,i,j;
	LL t;
	getpri();
	while(cin>>n){
		for(i=1;i<=n;i++){
			scanf("%lld",&t);
			LL tmp=t,ans=1;
			int po=0;
			while(tmp%2==0){
				tmp/=2;
			}
            for(j=1;j<top&&pri[j]<=tmp;j++){
            	if(tmp%pri[j]==0){
            		po=1;
            		tmp/=pri[j];
            	    while(tmp%pri[j]==0){
            		    po++;
            		    tmp/=pri[j];
            	    }
            	    ans=ans*(po+1);
				}
            }
            if(tmp>1)ans*=2;  //有大于10^7的素因子出现，且一定只有一个. 
			printf("Case %d: %lld\n",i,ans-1);			
		}
	}
	return 0;
}
