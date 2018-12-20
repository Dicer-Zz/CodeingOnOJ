#include<stdio.h>
#include<string.h>
char s[1020];
int cnt[26]; 
int main(){
	while(scanf("%s",s)!=EOF){
		memset(cnt,0,sizeof(cnt));
		int l=strlen(s);
		for(int i=0;i<l;i++){
			if(s[i]>='A' && s[i]<='Z')
			s[i] += 'a'-'A';
			cnt[s[i]-'a']++;
		}
		for(int i=0;i<26;i++){
			printf("%c:%d\n",'A'+i,cnt[i]);
		}
	}
	return 0;
} 
