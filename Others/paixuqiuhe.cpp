#include<stdio.h>
#include<algorithm>
using namespace std;
int s[25];
int cmp(int a,int b){
	if(a>=b) return 1;
	else return 0; 
}
int main()
{
	int n,sum=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&s[i]);
		sum += s[i]; 
	}
	sort(s,s+n,cmp);
	printf("%d",s[0]);
	for(int i=1;i<n;i++){
		printf(" %d",s[i]);
	}
	printf("\n%d\n",sum);	
	return 0;
 } 
