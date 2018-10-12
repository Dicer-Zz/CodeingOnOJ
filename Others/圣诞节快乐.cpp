#include<stdio.h>
#include<string.h>
using namespace std;

int main(){
	int T;
	char s[110];
	scanf("%d",&T);
	getchar();
	while(T--){
		scanf("%s",s);
	//	printf("%s\n",s);
		int l=strlen(s);
		if(l>24 || l<8){
			printf("ERROR\n");
			continue;
		}
		int count=0,up=0,low=0,digit=0,symbol=0;
		for(int i=0;i<l;i++){
			if(!up && s[i]>='A' && s[i]<='Z'){
				up=1;count++;
			}
			if(!low && s[i]>='a' && s[i]<='z'){
				low=1;count++;
			}
			if(!digit && s[i]>='0' && s[i]<='9'){
				digit=1;count++;
			}
			if(!symbol && (s[i] == '.' || s[i] == '!' || s[i] == '@' || s[i] == '!')){
				symbol=1;count++;
			}
		}
	//	printf("%d\n",count);
		if(count>=3){
			printf("GOOD PASSWORD\n");
		}
		else
		printf("BAD PASSWORD\n");
	}
	return 0;
} 
