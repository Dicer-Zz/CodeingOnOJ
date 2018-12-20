//#include<bits/stdc++.h>
#include<stdio.h>
#include<string.h>
using namespace std;
#define maxn 10000
int p[maxn];
int prim[maxn];

int main(){
	memset(p,0,sizeof(p));        //pสýื้น้มใ
	int n=0,i,j;
	for(i=0;i<maxn;i++){
		if(!p[i]){
			prim[n++] = i;
		}
		for(j=0;i*j<maxn;j++)
		p[i*j] = 1;
	}
	for(i=0;i<n-1;i++)
	printf("%03d ",prim[i]);
	return 0;
}
