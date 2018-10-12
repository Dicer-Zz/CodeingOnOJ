#include<stdio.h>
#include<string.h>
const int maxn = 1005;

char a[maxn][maxn];

int main(){
	int n;
	char s[maxn];
	scanf("%d",&n);
	getchar();   //吸收回车
	gets(s);      //读取s
	int m =  strlen(s) / n;
	int total = 0;
	if(strlen(s) % n != 0)	m++;
	for(int i=m-1;i>=0;i--){
		for(int j=0;j<n;j++){
			if(strlen(s) >= total)
				a[j][i] = s[total++];
			else
				a[j][i] = ' ';
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			putchar(a[i][j]);
		}
		putchar('\n');
	}
	return 0;
}
