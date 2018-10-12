#include<bits/stdc++.h>
using namespace std;

const int maxn=1200000;
char s[maxn];
int a[maxn],b[maxn];

int main(void){
	while(cin>>s){
		getchar();
		int l = strlen(s);
		if(l==1){
			printf("-1\n");
			return 0;
		}
		int sum1=0,sum2=0;
		for(int i=0;i<l;i++){
			if(s[i]=='0'){
				sum1++;
				a[i] = sum1;
				b[i] = sum2;
			}
			if(s[i]=='1'){
				sum2++;
				a[i] = sum1;
				b[i] = sum2;
			}
		}
		int k = -1;
		for(int i=1;i<l;i++){
			//printf("%d %d\n",a[i-1],b[l-1]-b[i-1]);
			if(a[i-1]==b[l-1]-b[i-1]){
				k = i;
				break;
			}
		}
		printf("%d\n",k); 
	}
	return 0;
} 
