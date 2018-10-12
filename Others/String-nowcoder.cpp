#include<stdio.h>
#include<string.h>
#include<algorithm>
using namespace std;

int cmp(int x,int y){
	return x > y;
}
int main(){
	char map[6][6]={{'0','1','2','3','4','5'},{'6','7','8','9','A','B'},{'C','D','E','F','G','H'},
					{'I','J','K','L','M','N'},{'O','P','Q','R','S','T'},{'U','V','W','X','Y','Z'}};
	int a[6],b[6],a_max,b_max;
	int T;
	char s[505];
	scanf("%d",&T);
	while(T--){
		memset(a,0,sizeof(a));
		memset(b,0,sizeof(b));
		scanf("%s",&s);
		int len = strlen(s);
		for(int i=0;i<len;i++){
			for(int j=0;j<6;j++){
				for(int k=0;k<6;k++){
					if(s[i] == map[j][k]){
						a[j]++;
						b[k]++;
					}
				}
			}
		}
		a_max = a[0];
		b_max = b[0];
		for(int i=0;i<6;i++){
			if(a_max < a[i])	a_max = a[i];
			if(b_max < b[i])	b_max = b[i];
		}
		for(int i=0;i<6;i++){
			for(int j=0;j<6;j++){
				if(a[i]==a_max && b[j]==b_max)	printf("%c",map[i][j]);
			}
		}
		printf("\n");
	}
	return 0;
}
