#include<stdio.h>
#include<algorithm>
using namespace std;
int s[1000000+50];
int cmp(int a,int b){
	if(a>b) return 1;
	else return 0;
}
int main()
{
	int m,n;
	scanf("%d %d",&n,&m);
	for(int i=0;i<n;i++)
	scanf("%d",&s[i]);
	sort(s,s+n,cmp);
	for(int i=0;i<m;i++){
		if(i==0)
		printf("%d",s[i]);
		else
		printf(" %d",s[i]);
	}
	return 0;
 } 
