#include<stdio.h>
#include<string.h>
using namespace std;
int hole[300];

int main(){
	memset(hole,0,sizeof(hole));
	int t,n,m;
	int ans;
	scanf("%d",&t);
	while(t--){
		ans = 0;
		scanf("%d%d",&m,&n);
		for(int i=0;;i++){
			if(hole[i*m%n] == 0){
				hole[i*m%n] = 1;
			    ans++;
			}
			else if(ans!=n){
				printf("YES\n");
				break;
			}
			else {
				printf("NO\n");
				break;
			}
		}
	}
	return 0;
} 
