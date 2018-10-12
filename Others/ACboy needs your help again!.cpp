#include<stdio.h>
#include<queue>
#include<stack>
#include<string.h>
using namespace std;

int main(){
	int n,m,a;
	char c[10];
	scanf("%d",&n);
	char str1[] = "FIFO",str2[] = "IN";
	while(n--){
		scanf("%d %s",&m,c);
		if(!strcmp(c,str1)){
			queue<int> q;
			while(m--){
				scanf("%s",c);
				if(!strcmp(c,str2)){
					scanf("%d",&a);
					q.push(a);
				}
				else{
					if(!q.empty()){
						printf("%d\n",q.front());
						q.pop();
					}
					else{
						printf("None\n");
					}
				}
			}
		}
		else{
			stack<int> s;
			while(m--){
				scanf("%s",c);
				if(!strcmp(c,str2)){
					scanf("%d",&a);
					s.push(a);
				}
				else{
					if(!s.empty()){
						printf("%d\n",s.top());
						s.pop();
					}
					else{
						printf("None\n");
					}
				}
			}
		}
	} 
	return 0;
}
