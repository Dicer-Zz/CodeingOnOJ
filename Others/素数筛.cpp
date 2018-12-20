#include<bits/stdc++.h>
//using namespace std;
#define maxn 10000
int p[maxn];
int prim[maxn];

int main(){
	memset(p,0,sizeof(p));        //pสýื้น้มใ 
	int n=1,i,j;
	prim[0]=1;
	for(i=2;i<maxn;i++){
		if(!p[i]){
			prim[n++] = i;
		}
		if(i)
		for(j=2;i*j<maxn;j++)
		p[i*j] = 1;
	}
	for(i=0;i<n-1;i++)
	printf("%04d ",prim[i]);
	return 0;
}

