#include<stdio.h>
#include<algorithm>
#include<string.h>
using namespace std;
struct node {
	char a[10];
	char b[10];
	int  c;
}st[100005];
int cmp1(node x,node y){
	return strcmp(x.a,y.a) < 0;
} 
int cmp2(node x,node y){
	if(strcmp(x.b,y.b)!=0) return strcmp(x.b,y.b)<0; 
	else 
	return strcmp(x.a,y.a) < 0;
}
int cmp3(node x,node y){
	if(x.c < y.c)
	return 1;
	else if(x.c == y.c){
		return strcmp(x.a,y.a) < 0;
	}
	else
	return 0;
}
int main(){
	int n,c,kase=1;
	while(scanf("%d %d",&n,&c) && n){
		printf("Case %d:\n",kase++);
		for(int i=0;i<n;i++)
		scanf("%s %s %d",&st[i].a,&st[i].b,&st[i].c);
		if(c==1)
		sort(st,st+n,cmp1);
		else if(c==2)
		sort(st,st+n,cmp2);
		else if(c==3)
		sort(st,st+n,cmp3);
		for(int i=0;i<n;i++)
		printf("%s %s %d\n",st[i].a,st[i].b,st[i].c);
	}
	return 0;
}
