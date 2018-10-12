#include<stdio.h>
#include<stack>
#include<string.h>
using namespace std;

char a[12],b[12];
int main(){
	int n;
	int pos1 = 1;
	int pos2 = 0;
	int flag[25];
	int total = 1;
	stack <int> s;
	while(~scanf("%d",&n)){
		memset(flag,0,sizeof(flag));
		scanf("%s %s",a,b);
		s.push(a[0]-'0');
		flag[0] = 1;
		while(!s.empty() && pos1!=n){
			if(s.top() == b[pos2]-'0'){
				flag[total++] = 0;
				s.pop();
				pos2++;
			}
			else if(pos1 != n){
				flag[total++] = 1;
				s.push(a[pos1]-'0');
				pos1++;
			}
		}
		for(int i=0;i<2*n;i++){
				if(flag[i] == 1)
					printf("in\n");
				else
					printf("out\n");
			}
	}
	return 0;
} 
