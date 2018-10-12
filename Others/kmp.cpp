#include <bits/stdc++.h>
#define next NEXT
using namespace std;

const int N = 2e6+100;
char s[N];
int next[N],len;
void getnext(){
	len = strlen(s);
	int i=0,j=-1;
	next[0] = -1;
	while(i<len){
		if(j == -1 || s[i] == s[j])
			next[++i] = ++j;
		else j = next[j];
	}
	int l = len - next[len];
	if(l == len)	printf("%d\n",len);
	else if(len%l == 0)	printf("0\n");
	else	printf("%d\n",l - len%l);
}
int main(int argc, char const *argv[])
{
	int T;
	scanf("%d",&T);
	while(T--){
		scanf("%s",s);
		getnext();
	}
	return 0;
}