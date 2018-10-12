#include<stdio.h>
#include<stack>
#include<string.h>
using namespace std;

int main(){
	int n;
	int p[20];
	stack<int>s;
	char a[12],b[12];
	while(~scanf("%d",&n)){
		memset(p,0,sizeof(p));
		scanf("%s %s",&a,&b);
		s.push(a[0]-'0');
		int pos1=1,pos2=0;
		int total = 1;
		p[0] = 1;
		while(pos1<=n){
			if(s.top() == b[pos2] - '0'){
				p[total++] = 2;
				pos2++;
				s.pop();
			}
			else if(pos1<=n){
				p[total++] = 1;
				s.push(a[pos1++]-'0');
			}
		}
		for(int i=0;i<n*2;i++){
			if(p[i] == 1){
				printf("in\n");
			}
			else if(p[i] == 2){
				printf("out\n");
			}
		}
	}
			
	return 0;
}
