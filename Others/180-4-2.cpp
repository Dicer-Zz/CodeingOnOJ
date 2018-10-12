#include<bits/stdc++.h>
using namespace std;

bool mseek(char* ps[],char* s,int n){
	for(int i=0;i<n;i++){
		if(strcmp(s,ps[i])==0)
			return 1;
	}
	return 0;
}
int main(void){
	int n;
	char *ps[10],s[10];
	printf("输入字符串个数n：");
	scanf("%d",&n);
	printf("输入n组字符串：\n");
	for(int i=0;i<n;i++){
		getchar();
		ps[i] = (char *)malloc(10*sizeof(char));
		gets(ps[i]);
	}
	for(int i=0;i<n;i++){
		printf("%s ",ps[i]);
	}
	printf("输入查询的数组：\n");
	scanf("%s",s);
	if(mseek(ps,s,n))	printf("存在\n");
	else	printf("不存在\n");
	return 0;
}
