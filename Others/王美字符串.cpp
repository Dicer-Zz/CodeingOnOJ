#include<stdio.h>
#include<string.h>
#include<algorithm>
using namespace std;
int a[26];
bool cmp(int x,int y){
	return x > y;
}
int main(){
	char ch[10005];
	while(scanf("%s",ch)==1){
		memset(a,0,sizeof(a));	
		int n = strlen(ch);
		for(int i=0;i<n;i++){
		if(ch[i] >= 'a' && ch[i] <= 'z'){
			a[ch[i]-'a'+1]++;
		}
		else
			a[ch[i]-'A'+1]++; 
		}
		int power = 26;
		int sum = 0;
		sort(a+1,a+26,cmp);
		for(int i=1;i<=26;i++){
			sum += a[i] * power;
			power--;
		//	printf("%c %d\n",'a'+i-1,a[i]);
		}
		printf("%d\n",sum);
	}
	return 0;
}
