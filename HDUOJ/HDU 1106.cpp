/* HDU 1106 排序 */  
#include<bits/stdc++.h>
using namespace std;

char s[1200],*p;
int a[600],cnt;		//最多是一个空格一个数字 500个 
int main(void){
	while(cin>>s){
		cnt = 0;
		p = strtok(s,"5");
		while(p!=NULL){		//去除前导5 
			a[cnt++] = atoi(p);
			p = strtok(NULL,"5");
		}
		sort(a,a+cnt);
		//一直以为不能输出重复的，结果。。没要求
		cout<<a[0];
		for(int i=1;i<cnt;i++)
			cout<<' '<<a[i];
		cout<<endl; 
	}
	return 0;
}
