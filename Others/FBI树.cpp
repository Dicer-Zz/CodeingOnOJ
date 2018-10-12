#include<stdio.h>
#include<string.h>
using namespace std;
int bianli(char s){
	;
}
int main(){
	int n,q=1,ans=1;
	char s[1];
	scanf("%d",&n);
//	getchar();
	scanf("%s",s);
	for(int i=n;i>0;i--){
		q *= 2;
		ans += q; 
	}
//	printf("%d\n",ans);
	printf("%s\n",s);
	system("pause")
	return 0;
}
