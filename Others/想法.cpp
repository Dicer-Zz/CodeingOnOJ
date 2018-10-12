#include<stdio.h>
#include<string.h>
#include<algorithm> 
using namespace std;
const int max = 1e7;
int s[3005];
int p[100001];
int cmp(int n,int m){
	if(n>=m)
	return 1;
	else
	return 0;
}
int main(){
	memset(p,0,sizeof(p));
	int n,m;
	while(scanf("%d%d",&n,&m)==2){
		for(int i=0;i<n;i++)
		scanf("%d",&s[i]);
		for(int i=0;i<n;i++){
			for(int j=i+1;j<n;j++){
				p[s[i]+s[j]]++; 
			}
		}
	 for(int i = 10000; m > 0; i--)
        {
            if(p[i] == 0)
            {
                continue;
            }
            else
            {
                while(p[i] > 0 && m > 0)
                {
                    if(m != 1)
                    {
                        printf("%d ", i);
                        p[i]--;
                        m--;
                    }
                    else
                    {
                        printf("%d\n", i);
                        p[i]--;
                        m--;
                    }
                }
            }
        }
    }

	return 0;
}
