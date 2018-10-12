#include<bits/stdc++.h>
const int maxn = 1e5;
using namespace std;
char a[maxn],b[maxn];
bool haspoint(char *s){
	int l = strlen(s);
	for(int i=0;i<l;i++){
		if(s[i]=='.')
			return 1;
	}
	return 0;
}
void erase_zero(char *s){
	int l = strlen(s);
	/*数据中可能有10.100 or 10.00的情况，应该去除无效零*/ 
	if(haspoint(s)){
		for(int i=l-1;i!='.';i--){
			if(s[i] == '0'){
				s[i] = '\0';
			}
			else	break;
		}
		l = strlen(s);		//update the lenth of s; 
		if(s[l-1] == '.')
			s[l-1] = '\0';
	}
	/*移除无效前导零*/
	/*for(int i=0;i<l;i++){
		if(s[i]=='0'){
			s[i] = '*';
		}
		else{
			break;
		}
	}*/ 
}
int main(void){
	while(cin>>a>>b){
		getchar();
		//puts(a);puts(b);
		erase_zero(a);erase_zero(b);
		//puts(a);puts(b);
		if(strcmp(a,b)==0)	printf("YES\n");
		else	printf("NO\n");
	}
	return 0;
}
